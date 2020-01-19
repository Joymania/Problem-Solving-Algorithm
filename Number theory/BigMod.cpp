#include<bits/stdc++.h>
using namespace std;

int bmod(long long a,int b,int m)
{
    if(b==0)
    return 1;
    int x=bmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
    x=(x*a)%m;
    return x;
}

int main()
{
	long long a,b,c;
	cin>>a>>b>>c;
	long long m=bmod( a,b,c);
	cout<<m<<endl;
	
}
