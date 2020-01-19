#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	int temp;
	if(a<b) swap(a,b);
	while(a%b!=0){
		temp=a;
		a=b;
		b=temp%b;
	}
	return b;
}

int lcm(int a,int b){
	return a / gcd(a,b) * b;
}

int main()
{
	while(1){
	int a,b;
	scanf("%d%d",&a,&b);
	int gc=gcd(a,b);
	int lc=lcm(a,b);
	printf("%d",gc);
	printf("\t %d",lc);
}
	
	return 0;
	
}
