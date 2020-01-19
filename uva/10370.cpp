#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tst;
	scanf("%d",&tst);
	for(int i=1;i<=tst;i++){
		int n;
		scanf("%d",&n);
		int arr[n+1],avg=0;
		for(int j=0;j<n;j++){
			scanf("%d",&arr[j]);
			avg+=arr[j];
		}
		avg/=n;
		double avggg=0;
		for(int k=0;k<n;k++){
			if(arr[k]>avg)
			avggg+=100;
		}
		printf("%2.3lf%\n",avggg/n);
	}
}
