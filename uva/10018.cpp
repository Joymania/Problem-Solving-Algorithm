#include <bits/stdc++.h>
using namespace std;

 long reverse( long n){
	 long rmndr,nmbr=0;
	while(n!=0){
		 rmndr=n%10;
		 nmbr=nmbr*10+rmndr;
		 n=n/10;
	}
	return nmbr;
}

int main()
{
	long long tst,n,cnt,tmp;
	cin>>tst;
	for(int i=1;i<=tst;i++){
		cin>>n;
		cnt=0;
     	 tmp=reverse(n);
		while(tmp!=n){
				n=tmp+n;
				tmp=reverse(n);
				cnt++;
		}
	cout<<cnt<<" "<<tmp<<endl;
	}
	return 0;
}
