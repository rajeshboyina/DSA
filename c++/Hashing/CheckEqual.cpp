#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
bool check(vector<int> arr1,vector<int> arr2)
{
    int n=arr1.size();
    int m=arr2.size();
    if(n!=m)
        return false;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[arr1[i]]++;
    for(int j=0;j<m;j++)
        if((mp.find(arr2[j])==mp.end()) || (mp[arr2[j]]==0))
        return false;
        else
            mp[arr2[j]]--;
    return true;
}
int main()
{
    vector<int> arr1={3,4,5,1,2,6};
    vector<int> arr2={1,2,3,4,5,6};
    cout<<check(arr1,arr2);
    return 0;
}
