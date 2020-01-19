#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tst,n;
	int arr[10];
	cin>>tst;
	for(int i=1;i<=tst;i++){
		cin>>n;
		for(int x=0;x<=9;x++){
					arr[x]=0;
				}
		for(int j=1;j<=n;j++){
			if(j<10){
				arr[j]=arr[j]+1;
			}	
			else if(j>=10){
				int count=j;
				while(count!=0){
			int sum=count%10;
			arr[sum]=arr[sum]+1;
			count=count/10;
		}	
	}
	}	
	for(int k=0;k<9;k++){
		printf("%d ",arr[k]);
	}
	printf("%d\n",arr[9]);	
	}
	
}
