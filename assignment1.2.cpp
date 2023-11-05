//move all zeroes to end of array without changing the sequence of non zero element
// Time Complexity of program :O(n)
#include<iostream>
using namespace std;
void ZeroesToEnd(int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			a[count]=a[i];
			count++;
		}
	}
	while(count<n)
	{
		a[count]=0;
		count++;
	}
}
int main()
{
	int n,a[10];
	cout<<"\nEnter the size of array : ";
	cin>>n;
	cout<<"\nEnter the array:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Original Array:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"\n";
	ZeroesToEnd(a,n);
	cout<<"Updataed Array :";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}