#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b;
	while(scanf("%lld%lld",&a,&b)!=EOF){
		if(a>b) cout<<a-b<<endl;
		else
		cout<<b-a<<endl;
	}
}
