/* Write a program that creates two threads to display all the prime numbers from 1-500.
The two threads should equally contribute to display the numbers. */

#include <stdio.h>
#include <pthread.h>

void *findPrime(void *p)
{
    int start = *(int *)p;
    int end = start + 250;

    for (int i = start; i <= end; i++)
    {
        int p = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                p = 0;
                break;
            }
        }
        if (i == 1)
        {
            p = 0;
        }
        if (p == 1)
        {
            printf("%d ", i);
        }
    }
}
void main()
{
    pthread_t thread1, thread2;
    int range1 = 1, range2 = 251;
    pthread_create(&thread1, NULL, findPrime, &range1);
    pthread_create(&thread2, NULL, findPrime, &range2);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("\n");
}