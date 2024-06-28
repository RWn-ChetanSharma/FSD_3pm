#include<stdio.h>
#include<string.h>

//#define max_size 100

main(){
	
//	char n[max_size] = "Hello";
	char n[] = "Hello";
	printf("%s\n", strupr(n));
printf("%s\n", strlwr(n));
printf("%s\n", strrev(n));	
}
