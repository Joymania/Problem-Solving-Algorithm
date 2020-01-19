#include <bits/stdc++.h>
using namespace std;

int main()
{
	 long long n1,n2,rest1,rest2,sum,carry,count;
	while(scanf("%lld%lld",&n1,&n2)==2){		
		if(n1==0 && n2==0) break;
		count=carry=0;
		while(n1>0 || n2>0){
			rest1=n1%10;
			n1=n1/10;
			rest2=n2%10;
			n2=n2/10;
			sum=rest1+rest2+carry;
			if(sum>9){
				count++;
				carry=1;
			}
			else
			carry=0;
		}
		 if(count==1)
        {
          printf("1 carry operation.\n");
        }
        else if(count==0) printf("No carry operation.\n",count);
		else 
			printf("%lld carry operations.\n",count);
		
	}
	return 0;
}
