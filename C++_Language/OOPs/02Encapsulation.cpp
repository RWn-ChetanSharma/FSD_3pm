#include<iostream>
#include<string.h>
using namespace std;

/*
	class Name
		{
			1. Varibales => Data Member / Data Attributes  / Data Propeties
			2. function => Data Member function / Methods
			3. Constructor
			4. Destructor
		}
*/

class Employee
{
	private:
		int id;
		char name[100];
		int salary;
		
	public:
		// Setter 
			
	void setData(int n1, char n2[], int n3)
		{
//			Static Data 

			this->id = n1;
			strcpy(this->name, n2);
			this->salary = n3;
			this->getData();
			
//			Dynamic User Data 
			
//			cout << "Enter ID : ";
//			cin >> id;
//			cout << "Enter Name : ";
//			cin >> name;
//			cout << "Enter Salary : ";
//			cin >> salary;
		}
		
		
		// Getter
		
	void getData()
		{
			cout << "ID : " << this->id
		 		 << ", Name : " << this->name
				 << ", Salary : " << this->salary
		 		 << endl;
		}
};


int main(){
	
	Employee e1, e2;
	
	e1.setData(1, "Rohan", 40000);
	e2.setData(2, "Hiren", 60000);
//	e1.salary = 10000;    // Data is private
	
//	e1.getData();
//	e2.getData();
	
		 
		 
	return 0;
}
