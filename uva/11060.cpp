#include <bits/stdc++.h>
using namespace std;
vector<int>v[105];
vector<int>indegree;
vector<int>order;
int n,m;

void kahnsalgo(){
	priority_queue<int, vector<int>, greater<int> > q;
	for(int i=0;i<n;i++){
		if(indegree[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){	
		int u=q.top();	
		q.pop();
		order.push_back(u);
		for(int j=0;j<v[u].size();j++){
			int x=v[u][j];
			--indegree[x];
			if(indegree[x]==0) q.push(x);
		}
	}
}

int main()
{
	char str[105][105];
	char n1[52];
	int cas=1;
	while(scanf("%d",&n)==1){
		map<string, int>mp;
		for(int i=0;i<n;i++){
		scanf("%s",str[i]);
		mp[str[i]]=i;
	}
	scanf("%d",&m);
	int x,y;
	indegree.resize(n);
	for(int i=0;i<m;i++){
		scanf("%s",n1);
		x=mp[n1];
		scanf("%s",n1);
		y=mp[n1];
		v[x].push_back(y);
		++indegree[y];
	}
	kahnsalgo();
	printf("Case #%d: Dilbert should drink beverages in this order:",cas);
		for(int i=0;i<order.size();i++){
			int max=order[i];
			cout<<" "<<str[max];
		}
		printf(".\n");
		++cas;
		for(int i=0;i<n;i++) v[i].clear();
		mp.clear();
		order.clear();
	}
	
}
