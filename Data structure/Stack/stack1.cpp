#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack<int>mystack;
	for(int i=1;i<=10;i++){
		mystack.push(i);
	}
	while(!mystack.empty()){
		cout<<mystack.top()<<endl;
		mystack.pop();
	}
}
