#include<iostream>

int main(int argc, char const *argv[])
{
	for(int i=1;i<=4;i++){
		for(int j=1;j<=10;j++)
			std::cout<<i*j<<" ";
		std::cout<<"\n";
	}
	return 0;
}
