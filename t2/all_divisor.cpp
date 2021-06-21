#include<iostream>

int main(int argc, char const *argv[])
{
	int a=10;
	for(int i=1;i<=10;i++)
	{
		if(a%i==0) std::cout<<i<<" ";
	}	
	return 0;
}
