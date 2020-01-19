#include <bits/stdc++.h>
using namespace std;
int flag[110][110],r,c;
char grid[110][110];
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};

void floodfill(int i,int j)
{
	if(i<0 || j<0 || i>r-1 || j>c-1) return ;
	if(grid[i][j]=='1' && flag[i][j]==0){
		flag[i][j]=1;
		for(int m=0;m<8;m++){
			int x=i+fx[m];
			int y=j+fy[m];
			floodfill(x,y);
		}
	}
}

int main()
{
	int i,j,cnt,count=0;
	while(scanf("%d",&r)==1){
		count++;
		c=r;
	memset(flag,0,sizeof(flag));	
	getchar();
	cnt=0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		scanf("%c",&grid[i][j]);
		getchar();
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(grid[i][j]=='1' && flag[i][j]==0){
				cnt++;
				floodfill(i,j);
			}
		}
	}
	cout<<"Image number "<<count<<" contains "<<cnt<<" war eagles."<<endl;
}
	return 0;
}
