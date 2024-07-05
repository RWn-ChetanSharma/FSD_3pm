#include<stdio.h>

// Pointer with Array 

main(){
	int i;
	int a[] =  {10,20,30,40,50};
	
	int *p;
	
	p = &a;
	
//	printf("Value is %d And Address is %u\n", *(p+0), (p+0));
//	printf("Value is %d And Address is %u\n", *(p+1), (p+1));
//	printf("Value is %d And Address is %u\n", *(p+2), (p+2));
//	printf("Value is %d And Address is %u\n", *(p+3), (p+3));
//	printf("Value is %d And Address is %u\n", *(p+4), (p+4));
	
	for(i=0; i <= 4; i++){
//		printf("Value is %d And Address is %u\n", *(p+i), p+i);
		printf("a[%d] => %u  => %d\n", i, (p+i), *(p+i));
	}
	
	
//	Output 

//	a[0] => 6487536  => 10
//	a[1] => 6487540  => 20
//	a[2] => 6487544  => 30
//	a[3] => 6487548  => 40
//	a[4] => 6487552  => 50
		
}
