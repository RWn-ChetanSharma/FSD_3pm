#include<stdio.h>


// Array  => It is a collection of many values with same data type.

// 1D Array 

int main(){
	int i;
	int arr[] = {11,22,33,44,55,66,77,88,99};
			// 	   0, 1, 2, 3, 4
//	    printf("%d\n", arr[0]);
//		printf("%d\n", arr[1]);
//		printf("%d\n", arr[2]);
//		printf("%d\n", arr[3]);
//		printf("%d\n", arr[4]);

	for(i=0;i<=8;i++){
		if(arr[i]%2==0){
		printf("%d\n", arr[i]);
		}
		
	}
}
