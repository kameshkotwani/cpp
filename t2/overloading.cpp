#include<iostream>

int myMax(int a, int b){
	return a>b?a:b;
}
// function overloading
int myMax(int a, int b, int c){
	return myMax(myMax(a,b),c);
}      

int main(int argc, char const *argv[])
{
	std::cout<<myMax(10,30);
	std::cout<<myMax(10,30,40);

	return 0;
}
