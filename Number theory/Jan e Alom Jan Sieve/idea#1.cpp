#include <bits/stdc++.h>
using namespace std;

int n=5000;

bool isprime(int n){
	for(int j=2;j<n;j++)
	if(n%j==0)
	return false;
	return true;
}

int main()
{
	for(int i=2;i<=n;i++){
		if(isprime(i)==true)
		printf("%d\t",i);
	}
	return 0;
}
