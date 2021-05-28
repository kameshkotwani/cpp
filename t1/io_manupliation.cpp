#include<iostream>
#include<iomanip> //include iomanip to use I/O manipulation
using namespace std;
int main(int argc, char const *argv[])
{
	// bool a = true;
	// cout<<a<<"\n";
	// cout<<std::boolalpha;
	// cout<<a;

	// setting flags
	int a=26,b=20;
	cout<<std::showbase; //shows the basee
	cout<<std::showpos; //use noshowpos or noshowbase to disable the effect

	cout<<a<< " "<<b<<"\n";
	cout<<std::hex;
	cout<<a<< " "<<b<<"\n";
	cout<<std::oct;
	cout<<a<< " "<<b<<"\n";
	cout<<std::dec;
	cout<<a<< " "<<b<<"\n";


	// filling witdh and all
	int d = 12;
	cout<<std::setw(5); //works only once
	cout<<setfill('*'); // works only once
	cout<<d;
	cout<<std::setw(5); //works only once
	cout<<std::left;
	cout<<d;

	return 0;
}
