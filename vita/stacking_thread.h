//==============================================================================
// HackingSTL : thread
//
// https://github.com/metarutaiga/HackingSTL
//==============================================================================
#pragma once

#include <cstddef>

#if _LIBCPP_VERSION >= 1000
#   include <__threading_support>
    _LIBCPP_BEGIN_NAMESPACE_STD
    static inline size_t __libcpp_thread_setstacksize(size_t __s = 0)
    {
        if (__s < PTHREAD_STACK_MIN && __s)
            __s = PTHREAD_STACK_MIN;

        thread_local static size_t __s_ = 0;
        size_t __r = __s_;
        __s_ = __s;
        return __r;
    }
    static inline int __libcpp_thread_create_ex(__libcpp_thread_t *__t, void *(*__func)(void *), void *__arg)
    {
        size_t __s = __libcpp_thread_setstacksize();

        pthread_attr_t __a;
        ::pthread_attr_init(&__a);
        if (__s) ::pthread_attr_setstacksize(&__a, __s);
        int __r = ::pthread_create(__t, &__a, __func, __arg);
        ::pthread_attr_destroy(&__a);
        return __r;
    }
    _LIBCPP_END_NAMESPACE_STD
#   if defined(_LIBCPP_THREAD)
#       error #include <thread> is already included.
#   endif
#   define __libcpp_thread_create __libcpp_thread_create_ex
#   include <thread>
#   undef __libcpp_thread_create
    _LIBCPP_BEGIN_NAMESPACE_STD
    template<class _Fp, class ..._Args>
    _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
    thread stacking_thread(size_t __s, _Fp&& __f, _Args&&... __args)
    {
        __libcpp_thread_setstacksize(__s);
        return thread(__f, __args...);
    }
    _LIBCPP_END_NAMESPACE_STD
#endif

#if __GLIBCXX__
#   include <limits.h>
#   include <pthread.h>
#   if defined(_GLIBCXX_THREAD)
#       error #include <thread> is already included.
#   endif
#   define _M_start_thread _M_start_thread_ex
#   include <thread>
#   undef _M_start_thread
    namespace std {
    _GLIBCXX_BEGIN_NAMESPACE_VERSION
    static void* _M_execute_native_thread_routine(void* __p)
    {
        thread::_State_ptr __t{ static_cast<thread::_State*>(__p) };
        __t->_M_run();
        return nullptr;
    }
    static inline size_t _M_thread_setstacksize(size_t __s = 0)
    {
        if (__s < PTHREAD_STACK_MIN && __s)
            __s = PTHREAD_STACK_MIN;

        thread_local static size_t __s_ = 0;
        size_t __r = __s_;
        __s_ = __s;
        return __r;
    }
    void thread::_M_start_thread_ex(_State_ptr state, void (*)())
    {
        size_t __s = _M_thread_setstacksize();

        pthread_attr_t __a;
        ::pthread_attr_init(&__a);
        if (__s) ::pthread_attr_setstacksize(&__a, __s);
        const int err = pthread_create(&_M_id._M_thread, &__a, &_M_execute_native_thread_routine, state.get());
        ::pthread_attr_destroy(&__a);
        if (err)
            __throw_system_error(err);
        state.release();
    }
    template<class _Fp, class ..._Args>
    thread stacking_thread(size_t __s, _Fp&& __f, _Args&&... __args)
    {
        _M_thread_setstacksize(__s);
        return thread(__f, __args...);
    }
    _GLIBCXX_END_NAMESPACE_VERSION
    }
#endif

#if _MSVC_STL_UPDATE
#   include <process.h>
    _STD_BEGIN
    static inline unsigned _thread_setstacksize(unsigned __s = 0)
    {
        if (__s < 65536 && __s)
            __s = 65536;

        thread_local static unsigned __s_ = 0;
        unsigned __r = __s_;
        __s_ = __s;
        return __r;
    }
    _STD_END
#   if defined(_THREAD_)
#       error #include <thread> is already included.
#   endif
#   define _beginthreadex(a,b,c,d,e,f) _beginthreadex(a,_thread_setstacksize(),c,d,e,f)
#   include <thread>
#   undef _beginthreadex
    _STD_BEGIN
    template<class _Fp, class ..._Args>
    thread stacking_thread(unsigned __s, _Fp&& __f, _Args&&... __args)
    {
        _thread_setstacksize(__s);
        return thread(__f, __args...);
    }
    _STD_END
#endif
