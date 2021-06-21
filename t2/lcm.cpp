#include<iostream>

int main(int argc, char const *argv[])
{
	int a=6,b=9;
	int st = a>b?a:b;
	int end = a*b;
	int i=st;
	int ans=0;
	while(i<=end){
		if(i%a==0 and i%b==0)
		 	ans = i;
		i++;
	}
	std::cout<<ans;
	return 0;
}
