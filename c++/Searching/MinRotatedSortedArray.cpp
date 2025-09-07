/*
Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. Find the minimum element in the array. 
*/
#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> arr,int l,int h)
{
    if(l==h)
    return arr[l];
    if(arr[l]<=arr[h])
    return arr[l];
    int mid=(l+h)/2;
    if(arr[l]<=arr[mid])
    return min(arr[l],BinarySearch(arr,mid+1,h));
    else
    return min(arr[mid],BinarySearch(arr,mid+1,h));
}
int MinRotatedSortedArray(vector<int> arr)
{
    int n=arr.size();
    return BinarySearch(arr,0,n-1);
}
int main()
{
    vector<int> arr={7,8,9,3,4,5,6};
    cout<<MinRotatedSortedArray(arr);
    return 0;
}