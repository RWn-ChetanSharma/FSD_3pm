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
class C : public B
{
	public:
//		getA();
//		getB();
		void getC(){
			cout << "From Class C" << endl;
		}
};
int main(){
	
	C o1;
	
	o1.getA();
	o1.getB();
	o1.getC();
	
	
	
	
	return 0;
}
