#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[5]={1,2,0,7,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	
	// wrong solution, this is just the sum of all the elements
	// for(auto& a :arr){
	// 	sum+=a;
	// 	cout<<sum<<" ";
	// }
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			cout<<sum<<" ";
		}
	}
	return 0;
}
