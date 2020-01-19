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
	int i,j,m,count,n;
	char str1[100],str2[100],str3[100],str4[100];
	while(scanf("%s",str1)==1){
	int len=strlen(str1);
	j=len-1;
	for(n=0;n<len;n++){
		if(str1[n]=='A' || str1[n]=='E' ||str1[n]=='H' ||str1[n]=='I' ||
		str1[n]=='J' ||str1[n]=='L' ||str1[n]=='M' ||str1[n]=='O' ||
		str1[n]=='S' ||str1[n]=='T' ||str1[n]=='U' ||str1[n]=='V' ||
		str1[n]=='W' ||str1[n]=='X' ||str1[n]=='Y' ||str1[n]=='Z' ||str1[n]=='0' ||
		str1[n]=='1' || str1[n]=='2' || str1[n]=='3' || str1[n]=='5' || str1[n]=='8'){
			count=1;
		}
		else{
			count=0;
			break;
		}
	}
	if(count==1){
	
	for(m=0;m<len;m++){
			if(str1[m]=='E') str3[m]='3';
			else if(str1[m]=='J') str3[m]='L';
		    else if(str1[m]=='L') str3[m]='J';
			else if(str1[m]=='S') str3[m]='2';
			else if(str1[m]=='Z') str3[m]='5';
			else if(str1[m]=='2') str3[m]='S';
			else if(str1[m]=='3') str3[m]='E';
			else if(str1[m]=='5') str3[m]='Z';	
		else
		str3[m]=str1[m];
	}
}
	for(i=0;i<len;i++){
		str2[i]=str1[j];
		str4[i]=str3[j];
		j--;
	}
	str2[i]='\0';
	str4[i]='\0';
	if(strcmp(str1,str4)!=0) count=0;
	if(strcmp(str1,str2)!=0 && count==0)
	cout<<str1<<" -- "<<"is not a palindrome."<<endl;
	else if(strcmp(str1,str2)==0 && count==0)
	cout<<str1<<" -- "<<"is a regular palindrome."<<endl;
	else if(strcmp(str1,str2)!=0  && strcmp(str1,str4)==0)
	cout<<str1<<" -- "<<"is a mirrored string."<<endl;
	else if(strcmp(str1,str2)==0 && strcmp(str1,str4)==0)
	cout<<str1<<" -- "<<"is a mirrored palindrome."<<endl;
	cout<<endl;	
	}
	return 0;

}

/*__________________Alhamdulillah__________________*/
