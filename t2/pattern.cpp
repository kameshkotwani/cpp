#include<iostream>

int main(int argc, char const *argv[])
{
	int i=5;
	int j;
	while(i--){
		j=5;
		while(j>0){
			std::cout<<'*'<<" ";
			j--;
		}
	std::cout<<"\n";
	}
	return 0;
}
