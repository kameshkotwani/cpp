#include<iostream>
#include<math.h>
//binary to decimal
int main(int argc, char const *argv[])
{
	int a = 1111;
	int i=0;
	int d=0;
	int sum=0;
	while(a){
		d = a%10;
		a/=10;
		if(!d) {
			i++;
			continue;
		}
		else{
			sum+=pow(2,i)*d;
			i++;
		}

		
	}
	std::cout<<sum;
	return 0;
}
