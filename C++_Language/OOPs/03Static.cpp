#include<iostream>
#include<string.h>
using namespace std;

/*
	1 student =>  108 bytes * 100 students => 10800 bytes
	
	1 student => 8 bytes * 100 students => 800 bytes
*/


class Student
{
	public:
		int id;          // 4
		static char clg[100];  // 100
		float perc;	     // 4
};

class Employee
{
//	Static data member
	public:
		int id;          // 4
		static char clg[100];  // 100
		int salary;	     // 4
		
		
//	 Static member functions

	static void info(){
		cout << "Hello Employee" << endl;
	}
};

// Scope Resolution Operator  ::

char Student::clg[100] = "RNW";
char Employee::clg[100] = "XYZ";

int main(){
	Student s1, s2;
	Employee e1, e2;
	
	
	cout << Student::clg << endl;
	cout << Employee::clg << endl;
	
	s1.id = 1;
//	strcpy(s1.clg, "Rohan");
	s1.perc = 70.50;
	
	s2.id = 2;
//	strcpy(s2.clg, "Hiren");
	s2.perc = 80.60;
	
	
	e1.id = 1;
	e1.salary = 70000;
	e1.info();
	
	e2.id = 2;
	e2.salary = 80000;
	e2.info();
	
	
	cout << "ID : " << s1.id
		 << ", College : " << s1.clg
		 << ", Percentage : " << s1.perc
		 << endl;
		
	cout << "ID : " << s2.id
		 << ", College : " << s2.clg
		 << ", Percentage : " << s2.perc
		 << endl;
		 
	cout << "ID : " << e1.id
		 << ", College : " << e1.clg
		 << ", Salary : " << e1.salary
		 << endl;
		
	cout << "ID : " << e2.id
		 << ", College : " << e2.clg
		 << ", Salary : " << e2.salary
		 << endl;	 
	
	
	return 0;
}
