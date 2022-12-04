 #include <stdio.h>

void main(){
 int size,i,j,greatest;
 printf("Enter the size of array: ");
 scanf("%d",&size);
 int arr[size];
 for (i=0;i<size;i++){
 	printf("Enter number: ");
 	scanf("%d",&arr[i]);
 }
 greatest = arr[0];
 for (i=0;i<size-1;i++){
 		if(arr[i] >= greatest){
 			 greatest = arr[i];
		 }
 }
 printf("%d",greatest);
}
