#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
vector<int>cost[100];
queue<int>q;
int dst[20];
void bfs(int u){
	q.push(u);
	dst[u]=0;
	while(!q.empty()){
		u=q.front();
		q.pop();
		for(int i=0;i<v[u].size();i++){
			int vv=v[u][i];
			if((dst[u]+cost[u][i])<dst[vv]){
				dst[vv]=(dst[u]+cost[u][i]);
				q.push(vv);
			}
		}
	}
	for(int i=1;i<=4;i++)
        cout<<i<<"  = "<<dst[i]<<endl;
}

int main()
{
	int n,e;
	scanf("%d%d",&n,&e);
	for(int i=1;i<=4;i++){
		dst[i]=999999;
	}
	for(int i=0;i<e;i++){
		int n1,n2,wght;
		scanf("%d%d%d",&n1,&n2,&wght);
		v[n1].push_back(n2);
		cost[n1].push_back(wght);
	}
	bfs(1);
}
