#include<iostream>
#include"Something.h"
using namespace std;

//Preprocessor directive
#define PI 3.141516
#define Cap_et cout

#define Linux

#ifdef Windows
void SayHello() {
	cout << "Windows" << endl;
}
#endif 

#ifdef Linux
void SayHello() {
	cout << "Windows" << endl;
}
#endif 


#define Size 30

#if Size<0
void Something() {
	cout << "Yess" << endl;
}
#elif Size>0
void Something() {
	cout << "No" << endl;
}
#endif


void main() {
	//cout << "Hello" << endl;
	//Cap_et << "Hello" << endl;

	//SayHello();
	//Something();
	//makros- 

	//auto date = __DATE__;

	//cout << date << endl;
	//cout << __TIME__ << endl;
	//cout << __LINE__ << endl;



	Foo();


}

