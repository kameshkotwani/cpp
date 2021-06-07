#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	//leap year
	int year=2012;
	if(year%4==0 and year%100!=0)
		cout<<"Leap Year\n";
	else if(year%400==0)
		cout<<"Leap Year\n";
	else
		cout<<"Not a Leap Year\n";
	return 0;
}
