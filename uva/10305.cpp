#include <bits/stdc++.h>
using namespace std;

int colour[101];
vector<int>v[101];
stack<int>ans;

int tmpo=1;
int n; 
void dfsvisit(int n){
	colour[n]=1;
	tmpo++;
	for(int i=0;i<v[n].size();i++){
		int x=v[n][i];
		if(colour[x]==0){
			dfsvisit(x);
		}
	}
	tmpo++;
	ans.push(n);
}

void dfs(){
	for(int i=1;i<=n;i++){
		if(colour[i]==0){
			dfsvisit(i);
		}
	}
}

int main()
{
	int e;
	while(scanf("%d%d",&n,&e)){
	if(n==0 && e==0) break;	
	for(int i=1;i<=n;i++){
		colour[i]=0;
	}	
	for(int i = 0; i < n; i++) v[i].clear();
	for(int i=0;i<e;i++){
		int n1,n2;
		scanf("%d%d",&n1,&n2);
		v[n1].push_back(n2);
	}
	dfs();
	while(!ans.empty()){
		cout<<ans.top()<<" ";
		ans.pop();
	}
	cout<<endl;
	}
	return 0;
}
