#include<iostream>
using namespace std;

int zero(int a[],int n)
{
	int low=0,high=(n-1),mid;
	while(low<=high)
	{
	mid=(low+high)/2;
	if(a[mid]==1)
	{
		low=mid+1;
	}
	else
	{
		high=mid-1;
	}
}
return n-low;
}

int main()
{
int n,i,a[10],ch;
do
{
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array(0/1):";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"No.of zeroes:"<<zero(a,n)<<endl;
	cout<<"Do you want to continue?(0/1):";
	cin>>ch;
}while(ch==1);
return 0;
}
