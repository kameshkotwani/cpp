#include<iostream>
#include<typeinfo>
using namespace std;
int main(int argc, char const *argv[])
{
	auto a=10;
	auto b=1.5;
	cout<<a<<" "<<b<<"\n";
	cout<<typeid(a).name()<<" "<<typeid(b).name()<<"\n";
	auto *p=&a;
	cout<<typeid(p).name()<<"\n";

	return 0;
}
//  No conversion happens when using auto
//  In the function return type of the function can be changed
// vector<int>::iterator i; is equavilaent to [auto i]
// Lambda expressions

