#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v[100];
	int n,e;
	scanf("%d%d",&n,&e);
	for(int i=0;i<e;i++){
		int n1,n2;
		scanf("%d%d",&n1,&n2);
		v[n1].push_back(n2);
		v[n2].push_back(n1);
	}
	for(int i=1;i<=n;i++){
		printf("For %d\n",i);
		int size=v[i].size();
		for(int j=0;j<size;j++){
			printf("%d\t",v[i][j]);
		}
		printf("\n");
	}
	
}
