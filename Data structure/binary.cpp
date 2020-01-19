#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100],key=7,start=0,end=9,mid;
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	do{
		mid =(start+end)/2;
		if(arr[mid]==key){
			cout<<"Find at "<<mid+1<<endl;
			break;
		}
		else if(arr[mid]>key){
			end=mid-1;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
	}
	while(start<=end);
	
	if(start>end)
	cout<<"Failed"<<endl;
	
	
}
