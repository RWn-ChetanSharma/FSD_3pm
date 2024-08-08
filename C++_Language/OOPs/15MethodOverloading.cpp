#include<iostream>
using namespace std;

/*
	Method Overloading :-
			1. Function name should be the same 
			2. parameters must be different
			3. must be in the same class
*/
class A
{
	public:
		void bus(){
			cout << "Bus is running Empty." << endl;
		}
		void bus(int n){
			cout << "Bus is running with " << n << " number of passenger."<< endl;
		}
};



int main(){
	
	A o1;
	
	o1.bus();
	o1.bus(10);
	
	return 0;
}
