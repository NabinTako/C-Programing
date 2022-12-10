#include <stdio.h>
void main(){
	int arr[]={5,15,25,30,35};
	int i,sum = 0,count;
	int size = sizeof(arr)/sizeof(arr[0]);
	for(i = 0;i<size;i++){
		if(arr[i] % 5 ==0 && (arr[i] % 2 != 0 && arr[i] % 3 != 0 )){
			sum = sum +arr[i];
			count = count +1;
		}
	}
	printf("%d\n",sum);
	printf("Numbers of divisible by 5 Only: %d",count);
}
