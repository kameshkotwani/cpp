#include<iostream>

int main(int argc, char const *argv[])
{
	for(int i=1;i<=3;i++)
	{
		int j=0;
		while(j<=3-i){
			std::cout<<" ";
			j++;
		}
		while (j<=3)
		{
			std::cout<<"*";
			j++;
		}
		std::cout<<"\n";
	}	
	return 0;
}
