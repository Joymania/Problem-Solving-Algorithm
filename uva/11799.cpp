#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tst;
	scanf("%d",&tst);
	for(int i=1;i<=tst;i++){
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+n);
		cout<<"Case "<<i<<": "<<arr[n-1]<<endl;
	}
}
