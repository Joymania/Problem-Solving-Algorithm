#include <bits/stdc++.h>
using namespace std;
int n=42,status[21];

int main()
{
	memset(status,false,sizeof(status));
	int sqrtn=int(sqrt((double) n));
	for(int i=3;i<=sqrtn;i+=2){
		if(status[i>>1]==false){
			for(int j=i*i;j<=n;j+=i+i){
				status[j>>1]=true;
			}
		}
	}
	for(int i=3;i<=n;i+=2){
		if(status[i>>1]==false)
		printf("%d\t",i);
	}
	
}
