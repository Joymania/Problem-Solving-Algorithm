#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tst;
	cin>>tst;
	getchar();
	char str[2000];
	for(int i=1;i<=tst;i++){
		scanf("%s",str);
		int len=strlen(str);
		len=len-1;
		if(strcmp(str,"78")==0 || strcmp(str,"1")==0 ||strcmp(str,"4")==0)
		printf("+\n");
		else if(str[len-1]=='3' && str[len]=='5') printf("-\n");
		else if(str[0]=='9' && str[len]=='4') printf("*\n");
		else if(str[0]=='1' && str[1]=='9' && str[2]=='0')printf("?\n");
	}
}
