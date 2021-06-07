#include<iostream>

using namespace std;

int main(int argc, char const *argv[])

{
	int a=0,b=200,c=30;
	if(a>=b and a>=c)
		cout<<a;
	else if(b>=c and b>=a)
		cout<<b;
	else
		cout<<c;
	return 0;
}
