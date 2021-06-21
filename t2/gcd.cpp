#include<iostream>
#include<numeric>

int main(int argc, char const *argv[])
{
	int a=5,b=10;
	std::cout<<std::__detail::__gcd(a,b);
	return 0;
}
