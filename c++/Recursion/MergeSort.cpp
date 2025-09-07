#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int>& arr,int l,int mid,int r)
{
    vector<int> temp;
    int left=l;
    int right=mid+1;
    while(left<=mid && right<=r)
    {
    if(arr[left]<arr[right])
    temp.push_back(arr[left++]);
    else
    temp.push_back(arr[right++]);
    }
    while(left<=mid)
    temp.push_back(arr[left++]);
    while(right<=r)
    temp.push_back(arr[right++]);
    for(int i=l;i<=r;i++)
    arr[i]=temp[i-l];
}
void MergeSort(vector<int> &arr,int l,int r)
{
    if(l<r)
    {
    int mid=(l+r)/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,r);
    Merge(arr,l,mid,r);
    }
}
int main()
{
    vector<int> arr={3,1,7,2,9,5,4,6,8};
    for(auto i:arr)
    cout<<i<<" ";
    cout<<endl;
    MergeSort(arr,0,arr.size()-1);
    for(auto i:arr)
    cout<<i<<" ";
    return 0;
}