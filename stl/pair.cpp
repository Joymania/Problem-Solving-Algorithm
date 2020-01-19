#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<pair<string, int> >v;
	vector<pair<string, int> >::iterator it;
	
	v.push_back(make_pair("Joy",25));
	v.push_back(make_pair("x",20));
	v.push_back(make_pair("y",30));
	for(it=v.begin();it!=v.end();it++){
		cout<<it->first<<"\t"<<it->second<<endl;
	}
}
