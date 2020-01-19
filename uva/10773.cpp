#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long tst;
	scanf("%lld",&tst);
	double u,v,d,t1,t2,t3;
	for(int i=1;i<=tst;i++){
		scanf("%lf%lf%lf",&d,&v,&u);
		printf("Case %d: ",i);
		if(v>=u){
			printf("can't determine\n");
		}
		else{
			t1=d/u;
			t2=(d/(sqrt(u*u-v*v)));
			t3=t2-t1;
			if(t3<=0){
				printf("can't determine\n");
			}
			else{
				printf("%.3lf\n",t3);
			}
		}
	}
	
	return 0;
}
