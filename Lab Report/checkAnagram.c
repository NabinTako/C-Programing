#include <stdio.h>

int main() {
    // Write C code here
    char arr[10],arr2[10];
    int check=0,check2=0;
    printf("enter a word: ");scanf("%s",arr);
    printf("enter another word: ");scanf("%s",arr2);
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if((int)arr[i]== 0){
            break;
        }
        check = check + arr[i];
        check2 = check2 + arr2[i];
        // printf("chech: %d\n",arr[i]);
        // printf("chech2: %d\n",check2);
    }
    if(check==check2){
        printf("true");
    }else{
        printf("false");
    }

    return 0;
}
