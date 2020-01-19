#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tst;
	scanf("%d",&tst);
	for(int i=1;i<=tst;i++){
		int n,count=0;
		scanf("%d",&n);
		printf("Case #%d: %d ",i,n);
		for(int j=2;j<=100000;j++){
			if(n%j==0){
				count++;
				if(count==2) printf(" ");
				int dvd=n/j;
				printf("= %d * %d",j,dvd);
				if(count==2) break;
			}
		}
		printf("\n");
	}
}
