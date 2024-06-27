#include <stdio.h>



int main() {
    int arr[100][100];
    int i, j, n;
    int diagonal_sum = 0;
    int sum = 0;

    printf("Enter the array's row & column size: ");
    scanf("%d", &n);


    printf("Enter array's elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }


    for (i = 0; i < n; i++) {
    	for(j=0; j<n; j++){
    		sum = sum + arr[i][j];
		}
	
        diagonal_sum += arr[i][i];
    }


    printf("The sum of diagonal elements of an Array: %d\n", diagonal_sum);
	printf("Sum of Array is %d", sum);
    return 0;
}
