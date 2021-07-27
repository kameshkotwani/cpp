#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[]={1,0,5,4,6,8};
	int size = sizeof(arr)/sizeof(arr[0]);
	int ans[6],mx;
	for(auto& x :ans){
		x=0;
	}
	ans[0]=arr[0];
	for(int i=1;i<size;i++){
		for(int j=0;j<i;j++){
			mx=arr[i]>arr[j]?arr[i]:arr[j];
		}
		ans[i]=mx;
	}
	for(auto& c :ans){
		cout<<c<<" ";
	}
	return 0;
}
