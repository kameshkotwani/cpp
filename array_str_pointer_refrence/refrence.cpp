#include<iostream>
int main(int argc, char const *argv[])
{
	int x=10;
	int &y=x; //y is the refrence of x
 	std::cout<<y;
	x+=5;
	std::cout<<y;
	std::cout<<y;
	std::cout<<y;
	return 0;
	 //applications
	// 1 swap
	// 2 print
	// 3 modifications

}
