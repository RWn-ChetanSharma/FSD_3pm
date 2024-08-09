#include<iostream>
using namespace std;


/*
	Operator Overloading :-
		1. Binary   => -,+,*,/
		2. Unary    => ++,--
*/

class Points
{
	public:
		int x,y;
		void set(int a, int b)
		{
			this->x = a;
			this->y = b;
		}
		void get()
		{
			cout << "X : " << x
				<< " , " 
				<< "Y : " << y
				<< endl;
		}
		Points operator+(Points n){
			Points temp;
			temp.x = this->x + n.x;
			temp.y = this->y + n.y;
			return temp;
			
		}
	
};

int main(){
	
	Points p1,p2, p3;
	
	p1.set(4,6);
	p1.get();
	
	p2.set(12, 15);
	p2.get();
	
	p3 = p1 + p2;    // p1.operator+(p2)
	p3.get();
	
	return 0;
}
