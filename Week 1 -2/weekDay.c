//WAP to store the name of week days and then print all.
#include <stdio.h>

int main(){
	char weekDay[7][25];
	int i;
	for(i=0;i<7;i++){
	printf("Enter a day: ");
	scanf("%s",weekDay[i]);
}
	for(i=0;i<7;i++){
	printf("%s \n",weekDay[i]);
}
	return 0;
}
 


