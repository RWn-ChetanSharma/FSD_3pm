#include<iostream>
using namespace std;

/*
	Method OverRiding :-
			1. Function name should be the same 
			2. parameters must be same
			3. must be in the different class
			4. must follow Inheritance
*/
class India
{
	public:
		void wear(){
			cout << "Shirt-Pent wearing." << endl;
		}
	
};
class Dubai : public India
{
	public:
		void wear(){
			cout << "Kurta Wearing ."<< endl;
		}
};



int main(){
	
	Dubai o1;
	
	o1.wear();
//	o1.India::wear();
	
	return 0;
}

