#include<iostream>
#include<string.h>
using namespace std;

// Friend Function => A function which can access private attributes of another class.

class Hiren
{
	private:
		int salary = 15000;
		int number_of_props = 5;

	friend void Rohan();
};

void Rohan(){
	Hiren h1;
	
	cout << h1.salary << endl;
	cout << h1.number_of_props << endl;

}
int main(){
		
	Rohan();


	return 0;
}

