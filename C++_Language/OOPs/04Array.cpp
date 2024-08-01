#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private:
		int id;
		char name[100];
		int salary;
		
	public:	
		void setData()
			{
				cout << "Enter Id : "; cin >> this->id;
				cout << "Enter Name : "; cin >> this->name;
				cout << "Enter Salary : "; cin >> this->salary;
				
			}
	
		void getData()
			{
				cout << "ID : " << this->id
			 		 << ", Name : " << this->name
					 << ", Salary : " << this->salary
		 			 << endl;
		 			 
			}
};


int main(){
	
	Employee e[5];   // Array of Employee => e[0], e[1], e[2]......e[100]
	
//	e[0].setData();
//	e[1].setData();
	
	for(int i = 0; i < 5; i++){
		e[i].setData();
	}

	
//	e[0].getData();
//	e[1].getData();

	for(int i = 0; i < 5; i++){
		e[i].getData();
	}
	

	return 0;
}

