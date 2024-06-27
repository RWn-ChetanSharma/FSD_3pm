#include<stdio.h>


void main(){
	
	int row, col, i, j, sum = 0; 
	float avg = 0;
	
	printf("Enter the array's row size : ");
	scanf("%d", &row);
	
	printf("Enter the array's column size : ");
	scanf("%d", &col);
	
	int a[row][col];
	printf("Enter array's elements: \n");
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("a[%d][%d] => ", i,j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	
	printf("Average and Sum of 2D array are : ");
	for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum=sum+a[i][j];
        }
    }

	 
//    avg=sum/(row*col);
    printf("Sum of array is %d\n", sum);
//    printf("\nAverage of all the elements of the matrix = %.2f",avg);
	
	
//	printf("%d", row);
//	printf("%d", col);
	
	
}

















// Enter the array's row size: 3
// Enter the array's column size: 3
// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 4
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 2
// a[2][2] = 6
// Output:
// Average of an Array: 3.88
