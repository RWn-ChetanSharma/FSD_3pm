#include<iostream>
using namespace std;

/*
	ERROR :- Error occcur by user/ programmer
	Exception handling :-
		1. Try block
		2. catch block
		3. throw keyword
*/

// 10/0 =>  ______

int main(){
	
	
	int a, b, c;
		
	char solution[100] = "Error occur ...!";
	a = 20;
	b = 0;
	try{
		if(b==0)
		{
			throw solution;
		}
		else{
			c = a / b;
			cout << c << endl;
		}
			
	}
	catch(char n[]){
//		cout << "Error.... !" << endl;
		cout << n << endl;
	}

	
	
	
	
	return 0;
}
