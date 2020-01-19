#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d,l;
	while((scanf("%d%d%d%d%d",&a,&b,&c,&d,&l))!=EOF){
		if(a+b+c+d+l==0)break;
		int count=0;
		for(int i=0;i<=l;i++){
		int sum=(a*pow(i,2))+(b*i)+c;
		if(sum%d==0)count++;
	}
	printf("%d\n",count);
	
	}
	
}
