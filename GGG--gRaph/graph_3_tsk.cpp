 #include <bits/stdc++.h>
 using namespace std;
 
 int main()
 {
 	vector<int> v[100];
 	int n,e,arr[10]={0},arr2[10];
 	scanf("%d%d",&n,&e);
 	for(int i=1;i<=e;i++){
 		int n1,n2;
 		scanf("%d%d",&n1,&n2);
 		v[n1].push_back(n2);
	 }
	 for(int i=1;i<=n;i++){
	 	printf("For node %d \n",i);
	 	int size=v[i].size();
	 	arr2[i]=size;
	 	for(int j=0;j<size;j++){
	 		int x=v[i][j];   
	 		arr[x]=arr[x]+1;
	 		printf("%d\t",v[i][j]);
		 }
		 printf("\n");
	 }
	 /*indegree logic akhne holo jkhn kono node er amra outdegree dkhchi tkhn j j 
	 node gulo amra pacchi sei sei node er nmbr array te 1 incrmnt korchi..fole kno 
	 node theke j outdegree gulo pabo akoi man hole oi array tei otar man incrmnt 
	 kore dcche ..*/
	 printf("Indegree \t Outdegree:\n");
	 for(int i=1;i<=n;i++){
	 	printf("For node %d :\n",i);
	 	printf("%d \t\t\t %d\n",arr[i],arr2[i]);
	 }	 
 }
