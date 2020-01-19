#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>v;

void prime(ll n){
	ll mmry=n/2;
	ll status[mmry+1];
	memset(status,false,sizeof(status));
	ll sqrtn=ll(sqrt((double)n));
	for(ll i=3;i<=n;i+=2){
		if(status[i>>1]==false){
			for(ll j=i*i;j<=n;j+=i+i){
				status[j>>1]=true;
			}
		}
	}
	v.push_back(2);
	for(ll i=3;i<=n;i+=2){
		if(status[i>>1]==false)
		v.push_back(i);
	}
	int count=0;
	for(ll i=0;i<v.size();i++){
		if(v[i]+v[i]==n) count++;
		for(ll j=i+1;j<v.size();j++){
			if(v[i]+v[j]==n){
				count++;
			}
		}
	}
	printf("%d\n",count);
	v.clear();
}

int main()
{
	ll n;
	while(scanf("%lld",&n)==1){
		if(n==0) break;
		prime(n);
	}
	return 0;
}
