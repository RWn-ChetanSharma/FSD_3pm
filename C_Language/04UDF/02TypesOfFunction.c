#include<stdio.h>

// Types Of Function

// 1. => TNRN (Take Nothing, Return Nothing)
// 2. => TNRS (Take Nothing, Return Something)
// 3. => TSRN (Take Something, Return Nothing)
// 4. => TSRS (Take Something, Return Something)

// 1. => TNRN (Take Nothing, Return Nothing)

greet(){
	printf("Hello Ayaj");
}

// 2. => TNRS (Take Nothing, Return Something)

rahul(){
	printf("hi\n");
	return printf("Hello Nothing\n");
	printf("Bye\n");
}

// 3. => TSRN (Take Something, Return Nothing)

neel(){
	printf("Return Nothing");
}

// 4. => TSRS (Take Something, Return Something)

//While declaring a function we pass some parameters in parentheses
// (param1, param2)

add(int a,int b){
	int sum = a + b;
	return sum;
}	
	
main(){
//	greet();
//	rahul();
//	neel(5000);
//	While calling a function we pass some arguments in parentheses
//	(arg1, arg2); 
	int sum1 = add(4,5);
	int sum2 = add(5,8);
	printf("The Sum is %d\n", sum1);
	printf("The Sum is %d\n", sum2);
}



