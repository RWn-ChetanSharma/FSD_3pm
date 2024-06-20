#include <stdio.h>

main()
{

    //	for(initialization, condition, process){
    int i, j;

    for (i = 5; i >= 0; i--) // row / outer Loop
    {
        for (j = 1; j <= i; j++) // columns //inner loop
        {
             printf("%d", j);
//             printf("*");
//            printf("%d", i);
        }
        printf("\n");
    }
}
