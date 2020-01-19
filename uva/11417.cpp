/* ..............Bismillahir Rahmanir Rahim...............*/

/* id : Joy_Pust
Name : Khorshed Hasan Tutul
Department of Information & Communication Engineering (ICE)
Pabna University of Science & Technology
mail : khorshedicepust@gmail.com */

#include <bits/stdc++.h>
using namespace std;

int gcd(int i,int j){
	return (j==0) ? i : gcd(j,i%j);
}

int main()
{
	int a,sum;
	while(scanf("%d",&a)==1){
		if(a==0)
		break;
		sum=0;
		for(int i=1;i<a;i++){
		for(int j=i+1;j<=a;j++){
			sum+=gcd(i,j);
		}
	}
	cout<<sum<<endl;
	}
	return 0;
	
}

/*__________________Alhamdulillah__________________*/
