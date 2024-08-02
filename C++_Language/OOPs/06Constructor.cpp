#include<iostream>
#include<string.h>
using namespace std;


/*
	Constructor => A Constructor is a block of code that is automatically 
					called when a class is instantiated. 

*/

/*
	Rules of Constructor =>
				1. Name is same as class Name.
				2. Constructors don't have return Data type.
	
*/

/*
	Types of Constructor =>
				1. Default Constructor 
				2. Parameterized Constructor
				3. Copy Constructor
	
*/

class City
{
	public:
		// Default Constructor
		City(){
//		void greet(){
			cout << "Welcome To The City." <<endl;
		}
};

class Town
{
	public:
		int id;
		char name[100];
		
		// Parameterized Constructor
		Town(int i, char n[]){
			 this->id = i;
			 strcpy(this->name, n);
			 this->getData();
		}
		
		void getData(){
			cout << "Id : " << this->id << " , "
				 << "Name : " << this->name << endl;
		}
};

int main(){

	City c1;
	
	Town t1(1, "Bopal");
	Town t2(2, "Gota");

//	c1.greet();
	return 0;
}


