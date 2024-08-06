#include<iostream>
#include<string.h>
using namespace std;


/*
	Hiearchical inheritance
*/

class Movie
{
	public:
//		char award[100] = "Best Movie";
		char award[100];
		
		void set(){
			strcpy(award, "Best Movie");
		}
};

class Bollywood : public Movie
{
	public:
		char n = 'B';
};

class Tollywood : public Movie
{
	public:
		char n = 'T';
};

class Hollywood : public Movie
{
	public:
		char n = 'H';
};


int main(){
	
	Bollywood b1;
	
	b1.set();
	cout << b1.n << " is " << b1.award << endl;
	
	return 0;
}
