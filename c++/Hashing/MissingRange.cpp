#include<iostream>
#include<unordered_set>
#include<climits>
using namespace std;
int Missing(int *arr)
{
    int n =sizeof(arr)/sizeof(arr[0]);
    unorderded_set<int> Ele;
    int Min,Max,res;
    Max=INT_MIN;
    Min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        Max=max(Max,arr[i]);
        Min=min(Min,arr[i]);
        Ele.insert(arr[i]);
    }
    return
}