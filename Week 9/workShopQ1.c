/* Write a program that creates two threads to display the
numbers from 1-1000. The two threads should equally
contribute to display the numbers.*/

#include <stdio.h>
#include <pthread.h>

void *first(void *p)
{
    int *num = (int *)p;
    int end = *num + 500;
    for (int i = *num; i < end; i++)
    {
        printf("%d ", i);
    }
}

void main()
{
    int start1 = 0, start2 = 501;
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, first, &start1);
    pthread_create(&thread2, NULL, first, &start2);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
}