/* Create a multithreaded program to display all the odd numbers from 1-1000. Your
program should ask the user to input the number of threads. Based on the number of
threads you should divide the workload among the threads
*/ \
#include <stdio.h>
#include <pthread.h>

struct info
{
    int thread_id;
    int start;
    int end;
};
void *display(void *p)
{
    struct info *var = (struct info *)p;
    for (int i = var->start; i < var->end + 1; i++)
    {
        if (i % 2 == 1)
        {
            printf("Thread %d: %d\n", var->thread_id, i);
        }
    }
}

void main()
{
    int num_thread;
    int limit = 1000;
    printf("No of threads: ");
    scanf("%d", &num_thread);
    int size = limit / num_thread;
    pthread_t thread[num_thread];
    struct info threads[num_thread];
    for (int i = 0; i < num_thread; i++)
    {
        threads[i].thread_id = i + 1;
        threads[i].start = i * size + 1;
        if (i == num_thread - 1)
        {
            threads[i].end = limit;
        }
        else
        {
            threads[i].end = (i * size) + size;
        }
    }
    for (int i = 0; i < num_thread; i++)
    {
        pthread_create(&thread[i], NULL, display, &threads[i]);
    }
    for (int i = 0; i < num_thread; i++)
    {
        pthread_join(thread[i], NULL);
    }
}