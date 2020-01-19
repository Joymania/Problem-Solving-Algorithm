#include <bits/stdc++.h>
using namespace std;

int fact(int n){
	int digit_of_fact;
	if(n==1) return log(1)/log(10)+1;
	else{
		  digit_of_fact =(log(n)/log(10)+1)+fact(n-1);
	}
	return digit_of_fact;	 
} 

int main()
{
	int n;
	scanf("%d",&n);
	int x=fact(n);
	printf("%d",x);
}
