/* ..............Bismillahir Rahmanir Rahim...............*/

/* id : Joy_Pust
Name : Khorshed Hasan Tutul
Department of Information & Communication Engineering (ICE)
Pabna University of Science & Technology
mail : khorshedicepust@gmail.com */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	 int a,b,temp,max,count,i,m;
	while(cin>>a>>b)
	{
		 max=0;
		 cout<<a<<" "<<b<<" ";
		if(a>b){
			temp=b;
			b=a;
			a=temp;
		}	
		for(i=a;i<=b;i++){
			m=i;
			count=1;
			while(m!=1){
				count++;
				if(m%2==0){
					m=m/2;
				}
				else
				m=3*m+1;
			}
			if(max<=count)
			max=count;
			
		}
		cout<<max<<endl;
	}
	
	return 0;
}

/*__________________Alhamdulillah__________________*/
