#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=0){
		if(n==0) break;
		int rslt=0,rmn;
		while(n/3){
			int dvd=n/3;
			rslt+=dvd;
			rmn=dvd+n%3;
			n=rmn;
		}
		if(rmn==2)++rslt;
		printf("%d\n",rslt);
	}
}
