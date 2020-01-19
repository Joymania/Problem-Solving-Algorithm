#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100],n=10;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	
	return 0;
	
}
