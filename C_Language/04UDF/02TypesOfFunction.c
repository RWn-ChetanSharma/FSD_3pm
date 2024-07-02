#include<stdio.h>

// Types Of Function

// 1. => TNRN (Take Nothing, Return Nothing)
// 2. => TNRS (Take Nothing, Return Something)
// 3. => TSRN (Take Something, Return Nothing)
// 4. => TSRS (Take Something, Return Something)

// 1. TNRN (Take Nothing, Return Nothing)

greet(){
	printf("Hello Dost");
}

// 2. => TNRS (Take Nothing, Return Something)

rahul(){
	return printf("Hello Rahul");
}

// 3. => TSRN (Take Something, Return Nothing)

neel(){
	printf("hello nothing");
}

// 4. => TSRS (Take Something, Return Something)

add(int a,int b){
	int sum = a+b;
	return sum;
}
main(){
//	greet();
//	rahul();
//	neel(5000);
	int sum = add(5,7);
	printf("%d", sum);
}
