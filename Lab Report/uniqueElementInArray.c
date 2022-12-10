# include <stdio.h>

void main(){
	int arr[]={1,2,4,3,8,3,0,2,4,9,5,6,6};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	int arr1[arrSize],i,j,skip;
	
	for (i=0;i<arrSize;i++){
		arr1[i] = arr[i];
	}
	for(i=0;i<arrSize;i++){
        skip=0;
		for(j=0;j<i+1;j++){
		    if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                  skip=1;
              }
                
            }
		}
		if(skip==0){
		    printf("%d",arr[i]);
		}
	}
}
