#include<iostream>

bool isPrime(int n){
	for(int i=2;i*i<n;i++){
		if(n%i==0) return false;
	}
	return true;
	
}

int main(int argc, char const *argv[])
{
	int n=20;
	while(true){
		
		n++;
		if(isPrime(n)) break;
		else continue;
	}
	std::cout<<n;
	return 0;
}
