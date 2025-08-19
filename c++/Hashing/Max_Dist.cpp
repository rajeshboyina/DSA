#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int MaxDist(int *arr,int n)
{
    unordered_map<int,int> ele;
    int i,res=0;
    for(i=0;i<n;i++)
    {
        if(ele.find(arr[i])!=ele.end())
        res=max(res,i-ele[arr[i]]);
        else
            ele[arr[i]]=i;
    }
    return res;
}
int main()
{
    int arr[6]={1, 1, 2, 2, 2, 1};
    cout<<MaxDist(arr,6);
    return 0;
}