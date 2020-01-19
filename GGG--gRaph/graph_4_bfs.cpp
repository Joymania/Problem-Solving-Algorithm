#include <bits/stdc++.h>
using namespace std;
vector<int>v[100];
queue<int>q;
int bfs(int u){
	int visited[50]={0};
	q.push(u);
	while(!q.empty()){
		u=q.front();
		q.pop();
		cout<<"For node "<<u<<endl;
		for(int i=0;i<v[u].size();i++){
			int x=v[u][i];
			if(!visited[x]){
				q.push(x);
				visited[x]=1;
				cout<<x<<"\t";
			}
			
		}
		cout<<endl;
	}
	
}

int main()
{
	int n,e;
	scanf("%d%d",&n,&e);
	for(int i=0;i<e;i++){
		int n1,n2;
		scanf("%d%d",&n1,&n2);
		v[n1].push_back(n2);
	}
	bfs(1);
}
