#include <bits/stdc++.h>
using namespace std;
vector<int>v[100];
vector<int>indegree;
vector<int>order;
int n,e;
void kahnsalgo(){
	queue<int>q;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(indegree[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){	
		int u=q.front();	
		q.pop();
		cnt++;
		order.push_back(u);
		for(int j=0;j<v[u].size();j++){
			int x=v[u][j];
			--indegree[x];
			if(indegree[x]==0) q.push(x);
		}
	}
	if(cnt!=n){
		printf("there exits a cycle of graph\n");
	}
	else{
		for(int i=0;i<order.size();i++){
			cout<<order[i]<<"\t";
		}
		cout<<endl;
	}
}

int main()
{
	int n1,n2;
	scanf("%d%d",&n,&e);
	indegree.resize(n);
	for(int i=0;i<e;i++){		
		scanf("%d%d",&n1,&n2);
		v[n1].push_back(n2);
		 ++indegree[n2];
	}
	kahnsalgo();
}
