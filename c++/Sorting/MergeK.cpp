#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> Merge(vector<int> &a,vector<int>&b)
{
    vector<int> res;
    int n=a.size();
    int m=b.size();
    int i,j;
    i=0;
    j=0;
    while(i<n&& j<m)
    {
        if(a[i]<b[j])
            res.push_back(a[i++]);
        else
        res.push_back(b[j++]);
    }
    while(i<n)
        res.push_back(a[i++]);
    while(j<m)
        res.push_back(b[j++]);
    return res;
}
vector<int> Mergek(vector<vector<int>> arr,int low,int high)
{
    if(low==high)
        return arr[low];
    int mid=(low+high)/2;
    vector<int> left=Mergek(arr,low,mid);
    vector<int> right=Mergek(arr,mid+1,high);
    return Merge(left,right);
}
int main(){
vector<vector<int>> arr=
{
    {
        3,7,9,11
    },
    {
        1,2,6,8
    },
    {
        4,5,13,16
    },
    {
        10,12,14,15
    }
};
vector<int> res=Mergek(arr,0,arr.size()-1);
for(auto i:res)
    cout<<i<<" ";
return 0;
}

