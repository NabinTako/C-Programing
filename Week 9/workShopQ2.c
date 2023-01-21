#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

struct arg
{
    int thread_id;
    int start;
    int end;
};

void *display(void *p)
{
    struct arg *var = (struct arg *)p;
    for (int i = var->start; i < var->end; i++)
    {
        printf("Thread number: %d, %d\n", var->thread_id, i);
    }
}

void main()
{
    struct arg a[5];
    int i, start = 1, end = 3;
    for (i = 0; i < 5; i++)
    {
        a[i].thread_id = i + 1;
        a[i].start = start;
        a[i].end = end;
        start = start + 2;
        end = end + 2;
    }

    pthread_t thread[5];
    for (i = 0; i < 5; i++)
    {
        pthread_create(&thread[i], NULL, display, &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        pthread_join(thread[i], NULL);
    }
}