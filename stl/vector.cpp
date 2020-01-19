#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v[100];
	vector<int>:: iterator it;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
		v[i].push_back(j);
		cout<<endl;
	}
//	for(it=v.begin();it!=v.end();it++){
//		cout<<*it<<endl;
//	}
	for(int i=0;i<10;i++){
		for(int j=0;j<v[i].size();j++)
		cout<<v[i][j]<<"\t";
		cout<<endl;
	}
}
