#include <bits/stdc++.h>
using namespace std;


int main()

{

    char num[10000];
    long long i,l,number,mod=0;
    int carry=0;
    scanf("%s%lld",num,&number);
    l=strlen(num);
    printf("Bhaagfol: ");
    int print_done = 0;
    for(i=0; i<l; i++)
    {
        mod=(mod*10+num[i]-'0');
        if(mod<number && print_done==0){
        	continue; 	
		} 
        printf("%lld",mod/number);
        print_done = 1;
        mod = mod % number;
    }
    printf("\nBhaagshesh: %lld",mod);
    return 0;

}
