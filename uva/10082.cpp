#include <bits/stdc++.h>
using namespace std;

char str[]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};

char fnctn(char c)
{
	for(int i=0;i<47;i++){
		if(str[i]==c) return str[i-1];
	}
	return c;
}

int main()
{
	
	char s[10005];
	while(gets(s))
	{
		int len =strlen(s);
		for(int i=0;i<len;i++) 
		s[i]=fnctn(s[i]);
		puts(s);
	}
}
