#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v;
	vector<int>:: iterator it;
	for(int i=1;i<=10;i++){
		v.push_back(i);
	}
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<"\t";
	}
	
}
