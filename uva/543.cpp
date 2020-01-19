#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int status[500000];
void prime(){
	int m=1000000;	
	memset(status,false,sizeof(status));
	int sqrtn=int(sqrt((double)m));
	for(int i=3;i<=sqrtn;i+=2){
		if(status[i>>1]==false){
			v.push_back(i);
			for(int j=i*i;j<=m;j+=i+i){
				status[j>>1]=true;
			}
		}
	}	
}

int main()
{
	int n;
	prime();
	while(scanf("%d",&n)==1){
		if(n==0) break;
		int count=0,x,y;
	for(int i=0;i<v.size();i++){
		x=v[i], y=n-v[i];
		if(x>y) break;
		if(status[x>>1]==false && status[y>>1]==false){
			printf("%d = %d + %d\n", n, x, y);
			count=1;
			break;
		}
	}
	if(count==0)
	printf("Goldbach's conjecture is wrong.");
	}
	return 0;
}
