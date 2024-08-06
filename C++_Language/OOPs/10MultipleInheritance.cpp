#include<iostream>
using namespace std;


/*
	Multiple Inheritance
*/

class A
{
	public:
		int a = 10;
};
class B 
{
	public:
		int b = 20;
};

class C : public A, public B
{
	public:
		int c = 30;
};

int main(){
	C c1;
	
	cout << c1.a << " , " << c1.b << " , "  << c1.c << endl;
	
	return 0;
}
