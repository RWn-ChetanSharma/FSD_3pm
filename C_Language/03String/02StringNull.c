#include<stdio.h>


main(){
	int i;
//	int a[] = {'H', 'E', 'L', 'L', 'O'};
//				0    1	  2	   3	4	=> 5
	
//	printf("%c\n", a[0]);
//	printf("%c\n", a[1]);
//	printf("%c\n", a[2]);
//	printf("%c\n", a[3]);
//	printf("%c\n", a[4]);
//	printf("%c\n", a[5]);

	char a[] = "HelloDost";
//				01234   => 5
//	printf("%c\n", a[0]);
//	printf("%c\n", a[1]);
//	printf("%c\n", a[2]);
//	printf("%c\n", a[3]);
//	printf("%c\n", a[4]);
//	printf("%c\n", a[5]);

//	for(i=0; i <= 10; i++){
	for(i=0; a[i] != '\0'; i++){
		printf("%c\n", a[i]);
	}
}
