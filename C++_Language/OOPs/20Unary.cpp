#include<iostream>
using namespace std;


/*
	Unary => ++, --
*/

class A
{
	public:
		int x;
		void set(int a)
		{
			this->x = a;
		
		}
		void get()
		{
			cout << "X : " << x << endl;
		}
		operator--(int){
			this->x--;
		}
};



int main(){
	
	A a1;
	a1.set(5);
	a1.get();
	
	a1--;    // a1.operator--()
	a1.get();
	
	a1--;
	a1.get();
	
	return 0;
}
