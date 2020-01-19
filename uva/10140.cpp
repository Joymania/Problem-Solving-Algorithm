#include <bits/stdc++.h>
using namespace std;
bool status[1000000];
vector<int>v;

void prime(){
	int n=1000000;
	memset(status,false,sizeof(status));
	int sqrtn=int(sqrt((double) n));
	for(int i=3;i<=sqrtn;i+=2){
		if(status[i]==false){
			for(int j=i*i;j<=n;j+=i+i){
				status[j]==true;
			}
		}
	}
}

int main()
{
	int n1,n2;
	prime();
	while(scanf("%d%d",&n1,&n2)==2){
		int count=0;
		int min=999999,max=0;
		for(int i=n1;i<=n2;i++){
			if(status[i]==false){
				v.push_back(i);
				count++;
			}
		}
		for(int i=0;i<v.size();i++) cout<<v[i]<<"\t";
//		int x,y,x1,y1;
//		for(int i=0;i<v.size()-1;i++){
//			int distance=v[i]-v[i+1];
//			if(distance<0) distance*=-1;
//			if(distance>max) {
//				max=distance;
//				x=v[i];
//				y=v[i+1];
//			}
//			if(distance<min){
//				min=distance;
//				x1=v[i];
//				y1=v[i+1];
//			}
//		}
//		if(count<2) printf("There are no adjacent primes.\n");
//		else
//		printf("%d,%d are closet, %d,%d are most distant.\n",x1,y1,x,y);
//		v.clear();
	}
}
