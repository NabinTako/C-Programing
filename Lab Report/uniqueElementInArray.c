# include <stdio.h>

void main(){
	int arr[7]={1,2,3,1,3,4};
	int arr1[7],i,j,size,skip;
	
	for (i=0;i<7;i++){
		arr1[i] = arr[i];
	}
	size = sizeof(arr1)/sizeof(arr1[0]);
	for(i=0;i<size;i++){
	    if((int)arr[i] == 0){
	        break;
	    }
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
