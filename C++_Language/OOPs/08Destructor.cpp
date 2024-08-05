#include<iostream>
#include <string.h>
using namespace std;

/*
	Destructor => Destructors are usually used to deallocate memory and do other 
				  cleanup for a class object and its class members when the object 
				  is destroyed. A destructor is called for a class object when that 
				  object passes out of scope or is explicitly deleted.
*/


class City 
{
	public:
		
		// Constructor 

		City(){
			cout << "Welcome To The City." << endl;
		}	
		
		// Destructor

		~City(){
			cout << "Thank You For Visting." << endl;
		}	
};

int main(){
	
	cout << "Namaste Bharat." << endl;
	
	City c1;
	
	cout << "Good Morning." << endl;
	cout << "Good Afternoon." << endl;
	
	
	return 0;
}

