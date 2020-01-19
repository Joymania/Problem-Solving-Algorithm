#include <bits/stdc++.h>
using namespace std;

int main()
{
	char str[1000000];
	int print=0;
	while(scanf("%s",str)==1){
		int rmn1=0,rmn2=0,rmn3=0,rmn4=0,rmn5=0;
		int len=strlen(str);
		for(int i=0;i<len;i++){
			rmn1=((rmn1*10)+(str[i]-'0'))%4;
			rmn2=((rmn2*10)+(str[i]-'0'))%100;
			rmn3=((rmn3*10)+(str[i]-'0'))%400;
			rmn4=((rmn4*10)+(str[i]-'0'))%15;
			rmn5=((rmn5*10)+(str[i]-'0'))%55;
		}	
		int count=1,leap=1;
		if(print==1)
		printf("\n");
		print=1;
		if(rmn1==0 && rmn2!=0 || rmn3==0){
			printf("This is leap year.\n");
			count=0;
			leap=0;
		}
		if(rmn4==0)
		printf("This is huluculu festival year.\n"),count=0;
		if(rmn5==0 && leap==0)
		printf("This is bulukulu festival year.\n");
		if(count==1 && leap==1)
		printf("This is an ordinary year.\n");		
	}
}
