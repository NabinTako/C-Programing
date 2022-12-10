#include <stdio.h>
void main(){
	int r=2,c=3;
	int arr[r][c],arr2[r][c];
	int i,j,sum[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("First array element %d%d: ",i,j);scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("second array lement %d%d: ",i,j);scanf("%d",&arr2[i][j]);
		}
	}
	printf("\nSum of corresponding elements of two matrices: \n");
  	for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j) {
      sum[i][j] = arr[i][j] + arr2[i][j];
      printf("%d   ", sum[i][j]);
      if (j == 2) {
        printf("\n\n");
      }
    }
	}
}
