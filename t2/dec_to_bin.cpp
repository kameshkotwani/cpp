#include<iostream>
// decimal to binary
#include<vector>
int main(int argc, char const *argv[])
{
	std::vector<int> bin;
	int a = 155;
	while(a){
		bin.emplace_back(a%2);
		a/=2;	
	}
	for(int i = bin.size()-1;i>=0;i--)
		std::cout<<bin.at(i)<<"";
	return 0;
}
