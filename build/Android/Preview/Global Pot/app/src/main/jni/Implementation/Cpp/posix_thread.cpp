#include <Uno/Uno.h>
#include <assert.h>
#include <Implementation/Cpp/posix_thread.h>

#if !0 && IOS
static pthread_key_t currentThread;
#endif

# if !0 && !IOS
static __thread ::g::Uno::Threading::Thread* currentThread;
# endif

//#if !#{Uno.Threading.Thread.Start():IsStripped}

#if IOS
void EnsureInitialized()
{

    if (uEnterCriticalIfNull(&currentThread))
    {
        pthread_key_create(&currentThread, NULL);
        uExitCritical();
    }

}
#endif

static void* ThreadStartup(void* arg)
{
    uAutoReleasePool pool;

    ::g::Uno::Threading::Thread* thread = (::g::Uno::Threading::Thread*)arg;
    uDelegate* threadStart = thread->_threadStart;
    assert(threadStart != NULL);

#if IOS
    EnsureInitialized();
    pthread_setspecific(currentThread, (void*)thread);
#else
    currentThread = thread;
#endif

    threadStart->InvokeVoid();

#if IOS
    pthread_setspecific(currentThread, NULL);
#else
    currentThread = NULL;
#endif

    uRelease(thread);

    return 0;
}

bool uPthreadsCreateThread(::g::Uno::Threading::Thread* thread, pthread_t* threadHandle)
{
    // This is a bit tricky. We need to retain *before* the thread starts,
    // otherwise the thread might be deleted before threadStartup has
    // started. To avoid leaks, threadStartup needs to release thread.

    uRetain(thread);
    return pthread_create(threadHandle, NULL, ThreadStartup, (void*)thread) == 0;
}

//#endif // !#{Uno.Threading.Thread.Start():IsStripped}

//#if !#{Uno.Threading.Thread.CurrentThread:IsStripped}

::g::Uno::Threading::Thread* uPthreadsGetCurrentThread()
{
#if IOS
    EnsureInitialized();
    return (::g::Uno::Threading::Thread*)pthread_getspecific(currentThread);
#else
    return currentThread;
#endif
}

//#endif // !#{Uno.Threading.Thread.CurrentThread:IsStripped}
