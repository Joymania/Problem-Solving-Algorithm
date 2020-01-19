#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	char song[][15]=
	{"Happy","birthday","to","you",
	"Happy","birthday","to","you",
	"Happy","birthday","to","Rujia",
	"Happy","birthday","to","you",};
	scanf("%d",&n);
	char str[101][101];
	for(int i=0;i<n;i++){	
			scanf("%s",str[i]);
	}
	while(1){
		int dvd=n/16;
		
		if(n%16!=0) dvd+=1;
		if(dvd==0) dvd=1;
		int x=0,m=0;
			for(int i=0;i<16*dvd;i++){
				for(int j=0;j<n;j++){		
				printf("%s: %s\n",str[j],song[x]);
				x++;
				m++;	
				if(x==16)x=0;
				if(m==16*dvd) return 0;
			}	
			
		}
	}
	return 0;
}

