#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	// int x=15.5;
	// double y=2;
	// double z= static_cast<double>(x)/y; //checks if the value can actually be converted
	// cout<<z;

	// get line
	string name;
	string name2;
	
	cin>>name2;
	cout<<name2<<endl;
	//get line will pick up anything if there is any buffer
	getline(cin,name);
	cout<<name; 
	return 0;
}
