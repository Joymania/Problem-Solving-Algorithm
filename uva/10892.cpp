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
	vector<int>v;
	 int n;
	while(scanf("%d",&n)==1){
		if(n==0) break;
		int x=n;
		int m=(int)sqrt(n);
		for(int i=1;i<=m;i++){
			if(x%i==0){
				int y=x/i;
				v.push_back(i);
				if(i!=y)v.push_back(y);
			}
		}
		int cnt=0;
		for(int a=0;a<v.size();++a){
			for(int b=a;b<v.size();++b){
				if(lcm(v[a],v[b]) ==n){
					cnt++;
				}
			}
		}
		printf("%d %d\n",n,cnt);
		v.clear();
	}
	
	return 0;
}
