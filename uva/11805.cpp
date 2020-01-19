#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tst;
	scanf("%d",&tst);
	int n,k,p;
	for(int i=1;i<=tst;i++){
		scanf("%d%d%d",&n,&k,&p);
		printf("Case %d: ",i);
		for(int j=1;j<=p;j++){	
			if(k==n) k=0;
				k=k+1;
		}
		printf("%d\n",k);
	}
	return 0;
}
