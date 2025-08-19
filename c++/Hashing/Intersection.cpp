#include<iostream>
#include<unordered_set>
using namespace std;
/*
Remove minimum elements such that no common elements exist in two arrays

Given two arrays arr1[] and arr2[] consisting of n and m elements respectively. The task is to find the minimum number of elements to remove from each array such that intersection of both arrays becomes empty and both arrays become mutually exclusive.

Examples:

Input: arr[] = { 1, 2, 3, 4}, arr2[] = { 2, 3, 4, 5, 8 }
Output: 3
Explanation: We need to remove 2, 3 and 4 from any array.

Input: arr[] = { 4, 2, 4, 4}, arr2[] = { 4, 3 }
Output: 1
Explanation: We need to remove 4 from arr2[]

Input : arr[] = { 1, 2, 3, 4 }, arr2[] = { 5, 6, 7 }
Output : 0
Explanation: There is no common element in both.
*/
int Intersection(int *arr1,int *arr2,int n,int m)
{
    unordered_set<int> ele;
    int res=0;
    //int n=sizeof(arr1)/sizeof(arr1[0]);
    //int m=sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0;i<n;i++)
        ele.insert(arr1[i]);
    for(int j=0;j<m;j++)
        if(ele.find(arr2[j])!=ele.end())
            res++;
    return res;
}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,5,6,7};
    cout<<Intersection(arr1,arr2,5,5);
    return 0;
}