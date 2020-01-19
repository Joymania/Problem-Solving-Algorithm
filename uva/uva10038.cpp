#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr1[3200],arr2[3200],n,i,mx;
	while(cin>>n){
		mx=1;
		for(i=0;i<n;i++){
			scanf("%d",&arr1[i]);
		}
		for(i=1;i<n;i++){
			arr2[i]=abs(arr1[i]-arr1[i-1]);
		}
		sort(arr2,arr2+i);
		for(i=1;i<n;i++){
			if(arr2[i]!=i){
				mx=0;
				break;
			}
		} 
		if(mx==0) cout<<"Not jolly"<<endl;
		else 
		cout<<"Jolly"<<endl;
	}
}
