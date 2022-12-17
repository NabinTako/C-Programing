#include <stdio.h>
#include <stdlib.h>
int main() {
    int size,size2,i;
    printf("size fo array: ");scanf("%d",&size);
    int *arr = (int*)calloc(size,sizeof(int));
    printf("enter elements\n");
    for(i=0;i<size;i++){
        scanf("%d",arr+i);
    }
    printf("data inside array: \n");
    for(i=0;i<size;i++){
        printf("%d\n",*(arr+i));
    }
    printf("num of element to add more: ");scanf("%d",&size2);
    size = size +size2;
    arr = realloc(arr,size *sizeof(int));
    if(size2!=0){
    	printf("enter elements: \n");
	
    for(i=size-size2;i<size;i++){
        scanf("%d",arr+i);
    }
}
    printf("final data inside array: \n");
    for(i=0;i<size;i++){
        printf("%d\n",*(arr+i));
    }
   return 0;
}
