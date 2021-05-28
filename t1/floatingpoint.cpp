#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	cout<<std::fixed;
	double z = 12244567.455;
	cout<<z<<"\n";
	cout<<std::setprecision(2);
	cout<<z<<"\n";
	return 0;
}
