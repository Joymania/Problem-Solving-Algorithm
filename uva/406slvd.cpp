#include <bits/stdc++.h>
using namespace std;
int arr[10001];

void eratosthens(int n,int c){
	arr[n+1]={0};
	bool marked[n+1];
	memset(marked,false,sizeof(marked));
	for(int i=2;i<=sqrt(n);i++){
		if(marked[i]==false){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
			for(int j=i*i;j<=n;j+=i){
				marked[j]=true;
			}
		}
	}
	int x=0,count=1;
	arr[x]=1;
	for(int i=2;i<=n;i++){
		if(marked[i]==false){
			x++;
			arr[x]=i;
			count++;
		}	
	}
	printf("%d %d:",n,c);
	if(c>(count+1)/2) c=(count+1)/2;
	if(count%2==0){
		for(int j=count/2-c;j<=count/2+c-1;j++){
			printf(" %d",arr[j]);
		}
		printf("\n\n");
	}
	else{
		for(int j=count/2-(c-1);j<=count/2+c-1;j++){
			printf(" %d",arr[j]);
		}
		printf("\n\n");
	}
	
}

int main()
{
	int n,c;
	while(scanf("%d%d",&n,&c)==2){
		eratosthens(n,c);
	}
}
