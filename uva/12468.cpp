#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)==2){
		if(a==-1 && b==-1) break;
		int t1,t2;
		if(a>b){
			t1=a-b;
			t2=b+100-a;
			cout<<min(t1,t2)<<endl;
		}
		else{
			t1=b-a;
			t2=a+100-b;
			cout<<min(t1,t2)<<endl;
		}
	}
}
