//Write a program to count and find the sum of all the numbers in the array
//which are exactly divisible by 7 and not divisible by 2 and 3.

void main(){
	int x[5];
	int i,sum = 0;
	for(i =0 ;i<5;i++){
		printf("enter a number: ");scanf("%d",&x[i]);
	}
	for(i = 0;i<5;i++){
		if(x[i] % 7 ==0 && (x[i] % 2 != 0 && x[i] % 3 != 0 )){
			sum = sum +x[i];
		}
	}
	printf("%d",sum);
	
	
}
