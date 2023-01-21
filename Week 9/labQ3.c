#include <stdio.h>
#include <pthread.h>

void *print(void *p)
{
    int start = *(int *)p;
    int end = start + 199;

    for (int i = start; i <= end; i++)
    {
        printf("%d\n", i);
    }
}

void main()
{
    pthread_t thread[5];
    int range[5] = {1, 201, 401, 601, 801};
    for (int i = 0; i < 5; i++)
    {
        pthread_create(&thread[i], NULL, print, &range[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        pthread_join(thread[i], NULL);
    }
}