#include <bits/stdc++.h>
using namespace std;

vector <int> lpsArray(string ptrn){
	vector <int> lps(ptrn.length());
	int indx=0;
	for(int i=1;i<(int) ptrn.length();){
		if(ptrn[i]==ptrn[indx]) lps[i]=indx+1,	++indx,++i;
	else{
		if(indx!=0) indx=lps[indx-1];
		else lps[i]=indx;
		++i;
	}
}
	return lps;
}

void kmp(string txt, string ptrn){
	bool found=false;
	vector<int> lps=lpsArray(ptrn);
	int j=0,i=0;
	while(i<(int)txt.length()){
		if(txt[i]==ptrn[j]) ++i,++j;
		else{
			if(j!=0) j=lps[j-1];
			else ++i;
		}
		if(j==(int)ptrn.length()){
			cout<<"found match at "<<(i-ptrn.length())<<endl;
			j=lps[j-1];
			found=true;
		}
	}
	if(!found) cout<<"not found"<<endl;
} 

int main()
{
	string txt,ptrn;
	getline(cin,txt);
	getline(cin,ptrn);
	kmp(txt,ptrn);
	
	return 0;
}
