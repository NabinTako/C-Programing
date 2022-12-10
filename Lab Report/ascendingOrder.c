#include <stdio.h>
int main()
{
    int num;
    printf("Enter the size of the array: ");
    scanf("%d", &num);
    int arr[num],temp,i,j;
    printf("Enter the array elements: \n");
    for ( i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < num; i++)
    {
        for ( j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array in ascending order: \n");
    for ( i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
