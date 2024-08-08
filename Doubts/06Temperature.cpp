#include<iostream>
#include<string.h>
using namespace std;


class P 
{
	public:
		int tempC;
		void getA(int n){
			this->tempC = n;
			cout << "Temperature in celsius is : " << tempC << endl;
		}
};
class Q : public P
{
	public:
			//tempC;
		float tempF;
		void getB(){
			
			tempF = (tempC * 9/5) + 32;
			cout <<  "Temperature in fahrenheit is : " << tempF << endl;
		}
};
class R : public Q
{
	public:
//		getA();
//		getB();
//		tempC;
//		tempF;
		float tempK;
		void getC(){
			tempK = (tempF - 32) * 5/9 + 273.15; 
			cout <<  "Temperature in kelvin is : " << tempK << endl;
		}
};
int main(){
	
	R o1;
	
	o1.getA(20);
	o1.getB();
	o1.getC();
	
	
	
	
	return 0;
}

