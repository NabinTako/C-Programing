#include <stdio.h>
#include <pthread.h>
int count = 0;
pthread_mutex_t p;
void *fun(void *arg)
{

    pthread_mutex_lock(&p);
    count++; // 1 //2
    int i;
    printf("Thread %d has started\n", count);
    for (i = 1; i <= 1000000; i++)
    {
    }
    printf("Thread %d has finished\n", count);
    pthread_mutex_unlock(&p);
}
void main()
{
    pthread_mutex_init(&p, NULL);
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, fun, NULL);
    pthread_create(&thread2, NULL, fun, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_mutex_destroy(&p);
}
