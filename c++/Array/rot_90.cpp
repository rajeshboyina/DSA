#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n,m;
//	cout<<"enter shape :";
//	cin>>m>>n;
	int matrix[3][3]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<i;j++)
		{
			swap(matrix[i][j],matrix[j][i]);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=2;j>=0;j--)
		{
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
}
