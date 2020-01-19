#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tst;
	scanf("%d",&tst);
	for(int i=1;i<=tst;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		int sum=a+b;
		int rslt=0,rmn;
		while(sum/c){
			int dvd=sum/c;
			rslt+=dvd;
			rmn=dvd+sum%c;
			sum=rmn;
		}
		printf("%d\n",rslt);
	}
}
