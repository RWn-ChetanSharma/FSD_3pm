#include<stdio.h>


main(){
	int i;
	int a[] = {'H', 'E', 'L', 'L', 'O'};
	
//	printf("%c\n", a[0]);
//	printf("%c\n", a[1]);
//	printf("%c\n", a[2]);
//	printf("%c\n", a[3]);
//	printf("%c\n", a[4]);
//	printf("%c\n", a[5]);

//for(i=0; i <= 10; i++){
	for(i=0; a[i] != NULL; i++){
		printf("%c\n", a[i]);
	}
}
