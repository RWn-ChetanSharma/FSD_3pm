#include<iostream>
#include<string.h>
using namespace std;


// Class => A class in C++ is a user-defined type or data structure declared with 
//          any of the keywords class, struct or union that has data and functions 
//          as its members whose access is governed by the three access specifiers 
//          private, protected or public. 

// Object => In C++, an object is an instance of a class that encapsulates data and 
//           functionality pertaining to that data. Suppose a class named MyClass was 
//           created, so now it can be used to create objects. To create an object of 
//           MyClass , specify the class name, followed by the object name.


class Student
{
	public:
			int id;
			char name[100];
			int age;
			

};

int main(){
	
	Student s1, s2, s3;   // Object 
	
	s1.id = 1;
	strcpy(s1.name,"Rohan");
	s1.age = 21;
	
	s2.id = 2;
	strcpy(s2.name,"Niya");
	s2.age = 20;
	
	s3.id = 3;
	strcpy(s3.name,"Vinit");
	s3.age = 24;
	
	
	
	cout << "ID : "<<s1.id <<" , " << "Name : " << s1.name << " , "<< "Age : " << s1.age <<endl;
	cout << "ID : "<<s2.id <<" , " << "Name : " << s2.name << " , "<< "Age : " << s2.age <<endl;
	cout << "ID : "<<s3.id <<" , " << "Name : " << s3.name << " , "<< "Age : " << s3.age <<endl;
	
	return 0;
}
