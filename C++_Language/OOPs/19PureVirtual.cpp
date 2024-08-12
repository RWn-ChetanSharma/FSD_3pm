#include<iostream>
using namespace std;


class A    // Abstract Class
{
	public:
		virtual void myPhone() = 0;
		void myname(){
			cout << "My Name is Niya."  << endl;
		}
};

class B : public A
{
	public:
		void myPhone(){
			cout << "My Phone is running..." << endl;
		}	
};


int main(){
	B a1;
	
	a1.myPhone();
	a1.myname();
	return 0;
}
