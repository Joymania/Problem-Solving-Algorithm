#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tst;
	scanf("%d",&tst);
	char str[10];
	int count=0,n;
	for(int i=1;i<=tst;i++){
		scanf("%s",str);
		if(strcmp(str,"donate")==0){
			scanf("%d",&n);
			count+=n;
		}
		if(strcmp(str,"report")==0)
		printf("%d\n",count);
	}
}
