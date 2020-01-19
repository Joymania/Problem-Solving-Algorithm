#include <bits/stdc++.h>
using namespace std;

int n=5000;

bool isprime(int n){
	int sqrtn = int (sqrt( (double) n));
	for(int j=3;j<=sqrtn;j+=2)
	if(n%j==0)
	return false;
	return true;
}

int main()
{
	printf("2\t");
	for(int i=3;i<=n;i+=2){
		if(isprime(i)==true)
		printf("%d\t",i);
	}
	return 0;
}
