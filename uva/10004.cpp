#include <bits/stdc++.h>
using namespace std;
#define max 50
#define red 5
#define blue 10
vector<int>vec[max];
bool visited[max];
int color[max],cnt=0;
void dfsvisit(int u){
	visited[u]=true;
	for(int i=0;i<vec[u].size();i++){
		int x=vec[u][i];
		if(visited[x]==false){
			if(color[u]==red) color[x]=blue;
			else color[x]=red;
		}
		if(visited[x]==true)
			if(color[u]==color[x]){
				cnt=1;
				break;
		}
		if(visited[x]==false) dfsvisit(x);
	}
}

void dfs(int edge){
	for(int i=1;i<=edge;i++){
		color[i]=red;
		if(visited[i]==false){
			dfsvisit(i);
		}
	}
}

int main()
{
	int tst,edge;
	scanf("%d",&tst);
	for(int i=1;i<=tst;i++){
		memset(visited,false,sizeof(visited));
		scanf("%d",&edge);
		int u,v;
		for(int j=1;j<=edge;j++){
			scanf("%d%d",&u,&v);
			vec[u].push_back(v);
			vec[v].push_back(u);
		}
	dfs(edge);
	if(cnt==0) printf("colourable\n");
	else printf("not colourable\n");
}
}
