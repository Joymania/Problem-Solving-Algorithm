#include <bits/stdc++.h>
using namespace std;
#define max 30
vector<int>vec[max];
bool visited[max];

void dfsvisit(int u){
	visited[u]=1;
	for(int i=0;i<vec[u].size();i++){
		int x=vec[u][i];
		if(visited[x]==0){
			dfsvisit(x);
		}
	}
}

void dfs(int n){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			cnt++;
			dfsvisit(i);
		}
	}
	printf("%d\n",cnt);
}

int main()
{
	int tst,Q,cas=0;
	char c,a,b;
	char inpt[10];
	scanf("%d", &tst);
	getchar();
	getchar();
	for(int i=1;i<=tst;i++){
		if(cas!=0) printf("\n");
		cas++;
		memset(visited, 0 ,sizeof(visited));
		cin>>c;
		Q=c-'0'- 16;
		while(getchar() != '\n');
		while(gets(inpt) && sscanf(inpt, "%c%c", &a, &b)==2){
			int u,v;
			u=a-'0'- 16;
			v=b-'0'- 16;
			vec[u].push_back(v);
			vec[v].push_back(u);
		}
		dfs(Q);
		for(int j=0;j<max;j++)
		vec[j].clear();
	}
	return 0;
	
}
