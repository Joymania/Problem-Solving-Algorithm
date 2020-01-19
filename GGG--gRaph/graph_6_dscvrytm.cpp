#include <bits/stdc++.h>
using namespace std;
#define white 0
#define gray 5
#define black 2
int n;
vector<int>v[100];
int colour[20]={white};
int tmpo = 1;
int st[20];
int ft[20];
void dfsvisit(int n){
	colour[n]=gray;
	st[n]= tmpo;
	++tmpo;
	for(int i=0;i<v[n].size();i++){
		int x=v[n][i];
		if(colour[x]==white){	
			dfsvisit(x);
		}
	} 
	colour[n]=black;
	ft[n]=tmpo;
	++tmpo;
}
void dfs(){
	for(int i=1;i<=n;i++){
		if(colour[i]==0)
		dfsvisit(i);
	}
}

int main()
{	
	int e;
	scanf("%d%d",&n,&e);
	for(int i=0;i<e;i++){
		int n1,n2;
		scanf("%d%d",&n1,&n2);
		v[n1].push_back(n2);
		//v[n2].push_back(n1);
	}
	dfs();
	for(int i=0;i<n;i++){
		cout<<"Node : "<<(char)('A'+i)<<" "<<st[i+1]<<" "<<ft[i+1]<<endl;
	}
}
