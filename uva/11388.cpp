#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(ll a,ll b){
	ll temp;
	if(a<b) swap(a,b);
	while(a%b!=0){
		temp=a;
		a=b;
		b=temp%b;
	}
	return b;
}

int lcm(ll a,ll b){
	return a*b/gcd(a,b);
}
int main()
{
	ll tst,a,b;
	scanf("%lld",&tst);
	for(int i=0;i<tst;i++){
		scanf("%lld%lld",&a,&b);
		if(b==lcm(a,b)){
			printf("%lld %lld\n",gcd(a,b),lcm(a,b));
		}
		else
		printf("-1\n");
	}
}
