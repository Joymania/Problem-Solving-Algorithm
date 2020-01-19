#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	while(scanf("%d%d",&n,&k)==2){
		int rslt=0,sum=n;
		while(n/k){
			int dvd=n/k;
			rslt+=dvd;
			int rmn=dvd+n%k;
			n=rmn;
		}
		printf("%d\n",rslt+sum);
	}
}
