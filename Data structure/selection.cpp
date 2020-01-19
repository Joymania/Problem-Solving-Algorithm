#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100],n=5;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		int index=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[index]){
				index=j;
				//cout<<index<<"\t";
			}
		}
		//cout<<endl;
		if(index!=i){
			int temp=arr[i];
			arr[i]=arr[index];
			arr[index]=temp;
		}
//		cout<<endl;
//		for(int i=0;i<n;i++)
//	cout<<arr[i]<<"\t";
//		
	}
	//cout<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"\t";
	
	return 0;
}
