#include<iostream>
#include<math.h>
int main(int argc, char const *argv[])
{
	//getting total number of digits of a number
	int a = 1024;
	std::cout<<(floor(log10f(a))+1);
	return 0;
}
