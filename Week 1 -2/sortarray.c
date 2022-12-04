#include <stdio.h>

int main(){
    int size,i,j,k,a;
    printf("Enter size of array");
    scanf("%d",&size);
    int arr[size];
    for (i=0;i<size;++i){
        printf("Enter number");
        scanf("%d",&arr[i]);
    }
    for (j=0;j<size;++j){
        for (k=j+1;k<size;++k){
            if(arr[j] > arr[k]){
                a= arr[j];
                arr[j] = arr[k];
                arr[k] = a;
                
            } 
        }
    }
    for (i=0;i<size;++i){
        printf("%d",arr[i]);
    }
} 
