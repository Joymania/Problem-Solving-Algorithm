#include <bits/stdc++.h>
using namespace std;

int main()
{
	char str[10]="((())())";
	stack<char>mystack;
	for(int i=0;i<strlen(str);i++){
		if(!mystack.empty() && mystack.top()=='(' && str[i]==')')
		mystack.pop();
		else
		mystack.push(str[i]);
	}
	if(mystack.empty()) printf("Balanced\n");
	else printf("Non Balanaced\n");
}

/*Stack e dhukbe jodinah amr dhora stack ta empty na hoy and amr stack er top element
ta ( na hoy and j string dhora hoyeche seta jodi oi index ta ) na hoy tahole
otherwise pop hoye jabe */
