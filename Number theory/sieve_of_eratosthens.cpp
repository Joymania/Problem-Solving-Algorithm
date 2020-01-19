#include <bits/stdc++.h>
using namespace std;

void eratosthens(int n){
	bool marked[n+1];
	memset(marked,false,sizeof(marked));
	for(int i=2;i<=sqrt(n);i++){
		if(marked[i]==false){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
			for(int j=i*i;j<=n;j+=i){
				marked[j]=true;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(marked[i]==false)
		cout<<i<<"\t";
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	eratosthens(n);
}
