#include<stdio.h>

int main(){
	int i,j;
	int arr[3][3] = {
						{4,2,3},
						{1,2,3},
						{7,8,9}
					};
	
//	 arr[0][0] = 4; //	 a[0][1] = 2;  //	 a[0][2] = 3;
//	 a[1][0] = 1; //	 a[1][1] = 2;  //	 a[1][2] = 3;
//	 a[2][0] = 7; //	 a[2][1] = 8   //	 a[2][2] = 9;

//	printf("%d", arr[2][2]);

	for(i=0;i<=2; i++){   // row
		for(j=0; j<=2; j++){   // column
			printf("arr[%d][%d] = %d\n",i,j, arr[i][j]);
//			printf("%d", arr[i][j]);
		}
		printf("\n");
	}	
}
