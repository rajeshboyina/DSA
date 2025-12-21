#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int detch_national_flag(vector<int> num)
{
	int l,mid,high;
	l=0;
	mid=0;
	high=num.size()-1;
	while(mid<=high)
	{
		if (num[mid]==0)
		{
			swap(num[l],num[mid]);
			l++;
			mid++;
		}
		else if(num[mid]==2)
		{
			swap(num[mid],num[high]);
			high--;
		}
		else
		mid++;
		
	}
	for(int i=0;i<num.size();i++)
	cout<<num[i]<<" ";
}
int main()
{
	vector<int> num;
	int n,i;
	//cout<<"enter size ";
	cin>>n;
	for(int t=0;t<n;t++)
	{
	
	cin>>i;
	num.push_back(i);
    }  
	detch_national_flag(num);
//	for(int i=0;i<n;i++)
//	cout<<num[i]<" ";
	return 0;
}
