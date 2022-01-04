1  #include <pthread.h>
2  
3  void foo(pthread_mutex_t *mutex) {
4    pthread_mutex_lock(mutex);
5    sleep(30000);
6    pthread_mutex_unlock(mutex);
7  }