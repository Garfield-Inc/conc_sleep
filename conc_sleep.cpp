#include <pthread.h>

void foo(pthread_mutex_t *mutex) {
  pthread_mutex_lock(mutex);
  sleep(30000);
  pthread_mutex_unlock(mutex);
}