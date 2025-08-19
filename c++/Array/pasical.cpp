#include<iostream>
#include<vector>
using namespace std;
int pasical(int num)
{
	for(int i=1;i<=num;i++)
	{
		int pres=1;
		for(int j=1;j<=i;j++)
		{
			cout<<pres<<" ";
			pres=pres*(i-j)/j;
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter row number ";
	cin>>n;
	pasical(n);
	return 0;
	
}
