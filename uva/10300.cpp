#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tst;
	cin>>tst;
	for(int i=1;i<=tst;i++){
		int n;
		cin>>n;
		int a,b,c;
		int rslt=0;
		for(int j=1;j<=n;j++){
			cin>>a>>b>>c;
			rslt+=(a*c);
		}
		cout<<rslt<<endl;
	}
}
