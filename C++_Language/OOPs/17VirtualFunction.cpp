#include<iostream>
using namespace std;


//Virtual Function 


class A
{
	public:
		virtual void show(){
			cout << "Method from class A" << endl;
		}
};
class B : public A
{
	public:
		 void show(){
			cout << "Method from class B" << endl;
		}
};


int main(){
	A *p1;   // pointer object
	A a1;
	B b1;
	
	p1 = &b1;
	p1->show();
	
	return 0;
}


