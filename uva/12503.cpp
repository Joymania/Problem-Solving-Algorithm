#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tst;
	scanf("%d",&tst);
	for(int i=1;i<=tst;i++){
		int n,n1,rslt=0;
		scanf("%d",&n);
		int arr[n+5];
		char str[10],str2[5];
		for(int j=1;j<=n;j++){
			scanf("%s",str);
			if(strcmp(str,"LEFT")==0){
				arr[j]=-1;
				rslt+=arr[j];
			}
			 if(strcmp(str,"RIGHT")==0){
				arr[j]=1;
				rslt+=arr[j];
			}
		 if(strcmp(str,"SAME")==0){
				scanf("%s%d",str2,&n1);
				arr[j]=arr[n1];
				rslt+=arr[n1];
			}
		}
		printf("%d\n",rslt);
	}
}
