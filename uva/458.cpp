#include <bits/stdc++.h>
using namespace std;

int main()
{
	char str[300];
	while(gets(str)){
		for(int i=0;i<strlen(str);i++){
			printf("%c",str[i]-7);
		}
		printf("\n");
	}
}
