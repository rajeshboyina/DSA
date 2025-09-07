#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
void SubsetSum(vector<int> &arr,vector<int> &ans,int ind,int curr,int n)
{
    if(ind==n)
    {
        ans.push_back(curr);
        return;
    }
    SubsetSum(arr,ans,ind+1,curr,n);
    SubsetSum(arr,ans,ind+1,curr+arr[ind],n);
}
void UniquesubSets(int ind,vector<int> &arr,vector<int> &curr,vector<vector<int>> &ans,int n)
{
    ans.push_back(curr);
    for(int i=ind;i<n;i++)
    {
        if(ind<i && arr[i]==arr[i-1]) continue;
        curr.push_back(arr[i]);
        UniquesubSets(i+1,arr,curr,ans,n);
        curr.pop_back();
    }
}
int main() 
{
    int n,c;
    cin>>c;
    cin>>n;
    if(c==1)
    {
    vector<int>ans,arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    SubsetSum(arr,ans,0,0,n);
    sort(ans.begin(),ans.end());
    for(auto i:ans)
    cout<<i<<" ";
    }
    else
    {
        vector<int> curr,arr(n,0);
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        cin>>arr[i];
        UniquesubSets(0,arr,curr,ans,n);
        for(auto i:ans)
        {
            for(auto j:i)
            cout<<j<<" ";
            cout<<endl;
        }
    }
}