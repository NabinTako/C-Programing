#include <stdio.h>

int main() {
    // Write C code here
    char arr[10],arr2[10];
    int check=0,check2=0,toLower,toLower2;
    printf("enter a word: ");scanf("%s",arr);
    printf("enter another word: ");scanf("%s",arr2);
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<size;i++){
    	if(arr[i]> 64 && arr[i] < 91){
    		toLower=toLower+32;
		}if(arr2[i]> 64 && arr2[i] < 91){
    		toLower2=toLower2+32;
		}
        if((int)arr[i]== 0){
            break;
        }
        check = check + arr[i];
        check2 = check2 + arr2[i];
    }
    if((check+toLower)==(check2+toLower2)){
        printf("%s and %s are a anagram.",arr,arr2);
    }else{
        printf("%s and %s are not a anagram.",arr,arr2);
    }

    return 0;
}
