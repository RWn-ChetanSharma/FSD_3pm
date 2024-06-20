#include <stdio.h>

int main()
{
    int i, j, k, rows = 5;

    // Loop for rows
    for (i = 0; i < rows; i++)
    {
        // Loop for spaces
        for (k = 0; k < i * 2; k++)
        {
            printf(" ");
        }
        
        // Loop for printing 1s and 0s
        for (j = 0; j < rows - i; j++)
        {
            if (j % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}


//1 0 1 0 1
//  1 0 1 0
//    1 0 1
//      1 0
//        1
