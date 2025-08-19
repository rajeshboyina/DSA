#include<iostream>
#include<unordered_set>
#include<climits>
using namespace std;
/*
Given an array of size N. Let min and max be the minimum and maximum in the array respectively. Task is to find how many number should be added to the given array such that all the element in the range [min, max] occur at-least once in the array.

Examples:

Input : arr[] = {4, 5, 3, 8, 6}
Output : 1
Only 7 to be added in the list.

Input : arr[] = {2, 1, 3}
Output : 0
*/
int Missing(int *arr,int n)
{
    //int n =sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> Ele;
    int Min,Max,res;
    Max=INT_MIN;
    Min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        Max=max(Max,arr[i]);
        Min=min(Min,arr[i]);
        Ele.insert(arr[i]);
    }
    return (Max-Min+1)-(Ele.size());
}
int main()
{
    int arr[]={7,3,2,6,5};
    cout<<Missing(arr,5);
    return 0;
}