#include<iostream>
using namespace std;

/*
	Inheritance => Passing data into another class from one class.
	
	
*/

/*
	Types Of Inheritance 
		1. Single Inheritance
*/	

		

class A
{
	public:
		int a = 20;
};

class B : public A
{
	public:
		int b = 30;
};

int main()
{
	B o1;
	
	cout << o1.a << " , " << o1.b << endl;
	
	return 0;	
};
