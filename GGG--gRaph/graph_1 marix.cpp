#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[50][50];
	int n,e;
	scanf("%d%d",&n,&e);
	for(int i=0;i<e;i++){
		int n1,n2;
		scanf("%d%d",&n1,&n2);
		arr[n1][n2]=1;
		arr[n2][n1]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(arr[i][j]==1){
				printf("%d\t%d\n",i,j);
			}
		}
	}
}
