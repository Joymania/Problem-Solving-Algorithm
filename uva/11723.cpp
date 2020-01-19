#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,i=1;
	while(scanf("%d%d",&a,&b)){
		if(a==0 && b==0) break;
		printf("Case %d: ",i);
		i++;
		if(((b*26)+b)<a){
			printf("impossible\n");
		}
		else{
			int sum=a-b;
			int dvd=sum/b;
			if(((b*26)+b)>=a){
				if(sum%b>0){
					dvd+=1;
				}
				printf("%d\n",dvd);
			} 
			
		}
	}
	return 0;
}
