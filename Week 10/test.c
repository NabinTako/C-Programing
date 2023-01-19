#include <stdio.h>
#include <pthread.h>

char retv[] = " Hello there!";

void *thread1(void *p)
{
    pthread_exit(&retv);
}

void main()
{
    void *pretv;
    pthread_t thr1;
    pthread_create(&thr1, NULL, thread1, NULL);
    pthread_join(thr1, &pretv);
    printf("*pretv = %s\n", (char *)pretv);
}
