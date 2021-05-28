#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	//case insensetive
	// int a=20; //decimal
	// int b = 0x1A; //hexadecimal
	// int c = 016; //octal
	// int d = 0b11;//binary

	// float a =10.5f; //becomes a float with f
	// double b = 10.515; //stored as double
	// float c = 2.1e15f;
	// double d = 200.1e-80;
	// double f = 0x1A.1p2; // in c++17 we need to use p instead of e when using hexadecimal
	// cout<<a<<"\n";
	// cout<<b<<"\n";
	// cout<<c<<"\n";
	// cout<<d<<"\n";
	// cout<<f<<"\n";

	// cout<<a<<"\n";
	// cout<<b<<"\n";
	// cout<<c<<"\n";
	// cout<<d<<"\n";
	//char and string
	// string literals are immutable
	char c = 'y';
	const char *c1 = "gfg"; //cannot be changed stored in static area
	cout<<typeid(c1).name()<<"\n";
	string s2 = "kamesh";
	cout<<typeid(s2).name()<<"\n";
	cout<<typeid(c).name()<<"\n";

	return 0;
}
