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
	
	int i,j,x,m,z;
	char str1[100],str2[100],str3[100];
	while(gets(str1)){
	j=0;
	if(strcmp(str1,"DONE")==0)
	break;
	for(z=0;z<strlen(str1);z++){
		str1[z]=tolower(str1[z]);
	}
	int len=strlen(str1);
	x=len-1;
	for(i=0;i<len;i++){
		if(str1[i]>='a' && str1[i]<='z'){
			str2[j]=str1[i];
			j++;
		}
	}
	str2[j]='\0';
	int len2=strlen(str2);
	int y=len2-1;
	for(m=0;m<len2;m++){
		str3[m]=str2[y];
		y--;
	}
	str3[m]='\0';
	if(strcmp(str2,str3)==0)
	cout<<"You won't be eaten!"<<endl;
	else
	cout<<"Uh oh.."<<endl;
}
	return 0;
}

/*__________________Alhamdulillah__________________*/
