#include<iostream>
#include<string.h>
using namespace std;


class A 
{
	public:
		void getA(){
			cout << "From Class A" << endl;
		}
};
class B : public A
{
	public:
//		getA();
		void getB(){
			cout << "From Class B" << endl;
		}
};
class C : public A
{
	public:
//		getA();
		void getC(){
			cout << "From Class C" << endl;
		}
};

class D : public B, public C
{
	public:
//		getA();
//		getB();
//		getC();
		void getD(){
			cout << "From Class D" << endl;
		}
};
int main(){
	
	D o1;
	
	o1.getD();
	o1.getB();
	o1.getC();
//	o1.B::getA();
	o1.C::getA();
	
	
	
	
	return 0;
}
