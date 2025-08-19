#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int next_perm(vector<int> &nums)
{
	int ind=-1;
	for(int i=nums.size()-2;i>=0;i--)
	{
		if (nums[i]<nums[i+1])
		{
			ind=i;
			break;
	}
	}
	if(ind==-1)
	reverse(nums.begin(),nums.end());
	else
	{
		for(int j=nums.size()-1;j>ind;j--)
		{
			if (nums[j]>nums[ind])
			swap(nums[j],nums[ind]);
			break;
		}
		reverse(nums.begin()+ind+1,nums.end());
	}
}
int main()
{
	vector<int> nums;
	int n,i;
	cout<<"enter size of array ";
	cin>>n;
	for(int t=0;t<n;t++)
	{
		cin>>i;
		nums.push_back(i);
	}
	next_perm(nums);
	for(int i=0;i<n;i++)
	cout<<nums[i]<<" ";
	return 0;
}
