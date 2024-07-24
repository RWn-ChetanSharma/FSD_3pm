#include<stdio.h>

// Pointer => A variable that stores address of another variable

main(){
	
	int a = 10;
	
	int *p ;     // Pointer 
	p = &a;     
	
	
//	printf("%d\n", &a);
//	printf("%d\n", p);
//	printf("%u\n", *p);
	
	printf("%p\n", *p);    // 000000000000000A   => Normal Memory location
	printf("%u\n", p);     // 6487572    => Memory Location in Interger
	printf("%d\n", *p);    // 10   => Value
	
	
//	printf("Size of Int => %d\n", sizeof(int));
//	printf("Size of Char => %d\n", sizeof(char));
//	printf("Size of Float => %d\n", sizeof(float));
//	printf("Size of Double => %d\n", sizeof(double));
	
}
