#include<iostream>
using namespace std;

#define size 10000 

int fact(int x, int ar[], int ar_size);

void factorial(int n)
{
	int ar[size];
	ar[0] = 1;
	int ar_size = 1;
	
	for (int x=2; x<=n; x++){
		ar_size = fact(x, ar, ar_size);
		
	}
		
	
	for (int i=ar_size-1; i>=0; i--)
		cout << ar[i];	

	cout<<endl;
}

int fact(int x, int ar[], int ar_size)
{
	int c = 0; 
	for (int i=0; i< ar_size; i++)
	{   int p = ar[i] * x + c;
		ar[i] = p % 10; 
		c = p/10; 
		cout<<"p value "<<p<<" ar[]"<<ar[i]<<" c value "<<c<<endl;
	}
	cout<<"--------------------"<<endl;

	while (c)
	{
		cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
		ar[ar_size] = c%10;
		cout<<"arr--"<<ar[ar_size];
		c = c/10;
		ar_size++;
		cout<<" c value "<<c<<endl;
		cout<<"++++++++++++++++++++++++++++++++++++++++"<<endl;
	}
	cout<<"arrsize"<<ar_size<<endl;
	return ar_size;
	
}
int main()
{

	int n;

	cout<<"Enter an integer number: ";
	cin>>n;

	cout<<"Factorial of "<<n<<" is:"<<endl;
	factorial(n);

	return 0;
}

