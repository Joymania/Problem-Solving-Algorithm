#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	vector<char>v;
	ll inpt;
	char c;
	while(scanf("%c",&c)){
		if(c=='\n') break;
		v.push_back(c);
	}
	scanf("%lld",&inpt);
	int rmnd=0;
	int size=v.size();
	for(int i=0;i<size;i++){
		rmnd=((rmnd*10)+(v[i]-'0'))%inpt;
	}
	cout<<rmnd<<endl;
}
