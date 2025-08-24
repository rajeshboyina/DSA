//maxk.cpp
//Rajesh Boyina
// 24-08-2025
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int maxk(vector<int> arr,int k)
{
    int curr,res=0;
    curr=accumulate(arr.begin(),arr.begin()+k,0);
    res=max(curr,res);

    
    for(int i=k;i<arr.size();i++)
    {
        curr-=arr[i-1];
        curr+=arr[i];
        res=max(curr,res);
    }
    return res;

}
int main()
{
    vector<int> arr={2,5,1,7,3,9};
    int k=3;
    cout<<maxk(arr,k);
    return 0;
}