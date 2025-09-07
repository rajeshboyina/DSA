#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//can't take same index more than once,no duplicate,ans in lexical order
void Comb2(vector<int>&arr,vector<int> &curr,vector<vector<int>> &ans,int ind,int tar)
{
    if(tar==0)
    {
        ans.push_back(curr);
        return ;
    }
    for(int i=ind;i<arr.size();i++)
    {
        if(i>ind && arr[i]==arr[i-1]) continue;
        if(arr[i]>tar) break;
        curr.push_back(arr[i]);
        Comb2(arr,curr,ans,i+1,tar-arr[i]);
        curr.pop_back();
    }

}
void Type2(vector<int> &arr,int target)
{
    sort(arr.begin(),arr.end());
    vector<int> curr;
    vector<vector<int>> ans;
    Comb2(arr,curr,ans,0,target);
    for(auto i:ans)
    {
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }

}
//can take same index more than once
void Comb(vector<int> &arr,vector<int> &curr,vector<vector<int>> &ans,int index,int target)
{
    if(arr.size()==index)
    {
        if(target==0)
        ans.push_back(curr);
        return;
    }
    //pick ele
    if(arr[index]<=target)
    {
        curr.push_back(arr[index]);
        Comb(arr,curr,ans,index,target-arr[index]);
        curr.pop_back();
    }
    Comb(arr,curr,ans,index+1,target);
}
void Type1(vector<int>&arr,int target)
{
    vector<int> curr;
    vector<vector<int>> ans;
    Comb(arr,curr,ans,0,target);
    for(auto i:ans)
    {
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }
} 

int main()
{
    int n,target,op;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>target;
    cin>>op;
    if(op==1)
    Type1(arr,target);
    else
    Type2(arr,target);
    return 0;
}