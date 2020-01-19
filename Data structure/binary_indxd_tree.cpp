#include <bits/stdc++.h>
using namespace std;
int arr[100],tree[100];

int query(int index){
	int sum=0;
	while(index>0){
		sum+=tree[index];
		index-=(index & -index);
	}
	return sum;
}

void update(int index,int value,int n){
	while(index<=n){
		tree[index]+=value;
		index+=(index & -index);
	}
}
void display(int arr[],int n){
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<"\t";
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		update(i,arr[i],n);
	}
	printf("Input array : \t");
	display(arr,n);
	printf("\n");
	printf("Tree array : \t");
	display(tree,n);
	printf("\n");
	update(3,10,n);
	printf("After updated tree array : \t");
	display(tree,n);
	printf("\n");
	printf("Query for 4 %d ",query(4));
	return 0;
}
