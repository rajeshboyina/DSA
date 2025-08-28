/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/
#include<iostream>
#include<vector>
using namespace std;
void ProductExceptSelf(vector<int> arr)
{
    int n=arr.size();
    vector<int> output(n,1);
    int temp=1;
    output[1]=arr[0];
    for(int i=2;i<n;i++)
    {
        output[i]=output[i-1]*arr[i-1];
    }
    // for(auto i: output)
    // cout<<i<<" ";
    // cout<<endl;
    for(int i=n-1;i>-1;i--)
    {
        output[i]=output[i]*temp;
        temp=temp*arr[i];
    }
    for(auto i:output)
    cout<<i<<" ";
}
int main()
{
    vector<int> arr={1,2,3,4};
    ProductExceptSelf(arr);
    return 0;
}

