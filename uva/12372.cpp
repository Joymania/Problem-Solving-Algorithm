#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tst;
	scanf("%d",&tst);
	int a,b,c;
	for(int i=1;i<=tst;i++){
		scanf("%d%d%d",&a,&b,&c);
		if(a<=20 && b<=20 && c<=20)
		printf("Case %d: good\n",i);
		else
		printf("Case %d: bad\n",i);
	}
	return 0;
}
