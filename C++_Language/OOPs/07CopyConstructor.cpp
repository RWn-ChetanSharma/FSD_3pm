#include<iostream>
#include<string.h>
using namespace std;


class Points
{
	public:
		int p1, p2;
		
		Points(int n1, int n2){
			this->p1 = n1;
			this->p2 = n2;
				
			cout << this->p1 <<" , " << this->p2 << endl;
		}	
		
//		Copy Constructor


		Points(Points &n){	
			
			this->p1 = n.p1;
			this->p2 = n.p2;
			
			
			cout << this->p1 <<" , " << this->p2 << endl;
		}
};


int main(){
	Points o1(4,5);
	Points o2(8,6);
	Points o3(o1);    // call copy constructor
//	Points o3 = o1;   // call copy constructor
	
	return 0;
}
