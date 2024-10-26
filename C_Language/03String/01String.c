#include<stdio.h>



// String = It is a collection of Characters

main(){
	int i;
	int n = 'h';
//	char n = 'h';
	printf("%d\n", n);   // 104 => ASCII value of 'h
	printf("%c\n", n);
	
//	for(i = 'a'; i <= 'z'; i++){
	for(i = 97; i<= 122; i++){
		printf("%c => %d\n", i, i);
	}


}


// https://www.ascii-code.com/
