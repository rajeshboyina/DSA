#include<iostream>
#include<vector>
using namespace std;
void Perm(vector<int> &arr,vector<vector<int>> &ans,vector<int> &curr,int freq[])
{
    if(curr.size()==arr.size())
    {
        ans.push_back(curr);
        return;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(!freq[i])
        {
            curr.push_back(arr[i]);
            freq[i]=1;
            Perm(arr,ans,curr,freq);
            freq[i]=0;
            curr.pop_back();
        }
    }
}
void recPerm(int ind,vector<vector<int>> &ans,vector<int> &arr)
{
    if(ind==arr.size())
    {
        ans.push_back(arr);
        return ;
    }
    for(int i=ind;i<arr.size();i++)
    {
        swap(arr[ind],arr[i]);
        recPerm(ind+1,ans,arr);
        swap(arr[ind],arr[i]);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> curr,arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<vector<int>> ans;
    int freq[n]={0};
    for(int i=0;i<n;i++) freq[i]=0;
    //Perm(arr,ans,curr,freq);
    recPerm(0,ans,arr);
    for(auto i:ans)
    {
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}