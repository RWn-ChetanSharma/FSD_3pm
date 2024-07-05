#include<stdio.h>

// Scale of Pointer

main(){
	int a = 10;
//	int b = 20;
	int *p1, *p2; 
	p1 = &a;
//	p2 = &b;
	
	printf("For a => value is %d and Address is %u\n", *p1, p1);    
	printf("For b => value is %d and Address is %u\n", *p1+1, p1+1);
printf("For b => value is %d and Address is %u\n", *p1+2, p1+2);
printf("For b => value is %d and Address is %u\n", *p1+3, p1+3);
printf("For b => value is %d and Address is %u\n", *p1+4, p1+4);
}
