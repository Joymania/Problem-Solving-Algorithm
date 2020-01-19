#include<bits/stdc++.h>
using namespace std;
#define size 10000

int fact(int x, int ar[], int ar_size);
void factorial(int n)
{
	int ar[size];
	ar[0] = 1;
	int ar_size = 1;
	for (int x=2; x<=n; x++){
		ar_size = fact(x, ar, ar_size);		
	}
	int i,j,sum=1;	
	for ( i=ar_size-1; i>=0; i--){
		if(ar[i]==0){
			ar[i]=1;
		}
		sum*=ar[i];
	}
	printf("%d\n",sum);
}

int fact(int x, int ar[], int ar_size)
{
	int c = 0; 
	for (int i=0; i< ar_size; i++)
	{   int p = ar[i] * x + c;
		ar[i] = p % 10; 
		c = p/10; 
	}
	while (c)
	{
		ar[ar_size] = c%10;
		c = c/10;
		ar_size++;
	}
	return ar_size;
	
}

int main()
{

	int n;
	char str[30];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",str);
		int len=strlen(str);
		factorial(len);
	}
	return 0;
}

