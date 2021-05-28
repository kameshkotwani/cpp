#include<iostream>
int x=20;
int main(void)

{
	// scoping 
	int x=35;
	{
		int x=78;
		std::cout<<x;

	}
}