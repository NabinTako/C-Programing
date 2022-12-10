//Write a program to count and find the sum of all the numbers in the array
//which are exactly divisible by 7 and not divisible by 2 and 3.

void main(){
	int arr[5];
	int i,sum = 0,count;
	for(i =0 ;i<5;i++){
		printf("enter a number: ");scanf("%d",&arr[i]);
	}
	for(i = 0;i<5;i++){
		if(arr[i] % 7 ==0 && (arr[i] % 2 != 0 && arr[i] % 3 != 0 )){
			sum = sum +arr[i];
			count = count +1;
		}
	}
	printf("%d\n",sum);
	printf("Numbers of divisible by 7 only : %d",count);
	
	
}
