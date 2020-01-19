#include <bits/stdc++.h>
using namespace std;
#define white 0
#define gray 1
#define black 2
vector<int>v[100];
int colour[20]={white};
int n;
void dfsvisit(int n){
	colour[n]=gray;
	cout<<n<<" ";
	for(int i=0;i<v[n].size();i++){
		int x=v[n][i];
		if(colour[x]==white){	
			dfsvisit(x);
		}
	}
	//cout<<endl;
	colour[n]=black;
	//cout<<"Node no "<<n<<" "<<colour[n]<<endl;
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
	
}
