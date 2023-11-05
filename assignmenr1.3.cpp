//Find smallest number,from the number of trailing zeroes present in its factorial
//Time Complexity:O(nlogn)
#include<iostream>
using namespace std;
int findnum(int n)
{
	int num=5;
	int count=1;
	while (true)
	{
		int temp=num;
		while(temp%5==0)
		{
			count++;
			temp=temp/5;
		}
		if(count>=n)
		{
			return num;
		}
		num++;	
}
}
int main()
{
	int n,ch;
	do
	{
	cout<<"\nEnter the number of trailing zeroes :";
	cin>>n;
	cout<<"\nSmallest Number with ["<<n<<"] trailing zeroes = "<<findnum(n);
	cout<<"\nDo you want to continue(1/0):";
	cin>>ch;
}while(ch!=0);
	return 0;
	
}