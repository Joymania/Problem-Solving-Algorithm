#include <bits/stdc++.h>
using namespace std;

int main()
{
	//declaration
	map<int , string>mp;
	map<int , string>:: iterator it;
	//insert
	mp[1]="Joy";
	mp[2]="Zunayed";
	mp[3]="Raju";
	mp[4]="Saikat";
	mp[5]="Robi";
	mp[6]="mehedi";
	//insert
	mp.insert(make_pair(160625, "Khorshed Hasan Tutul"));
	//size
	cout<<mp.size()<<endl;
	//clearing 
	//mp.clear();
	
	//find
	it =mp.find(5);
	cout<<it->second<<endl;
	//delate
	//mp.erase(it);
	for(it=mp.begin();it!=mp.end();it++)
	cout<<it->first<<" "<<it->second<<endl;
}
