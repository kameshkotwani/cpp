#include<iostream>
int main(int argc, char const *argv[])
{
	int fact=1;
	int a = 5;
	for(int i=a;i>0;i--){
		fact*=i;
	}
	std::cout<<fact;
	return 0;
}
