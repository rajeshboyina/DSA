#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int arr[]={2,3,5};
    int k=5;
    int n=3;
    int sum=0;
    int maxi=0;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==k)
            maxi=i+1;
        else
            if(mpp.find(sum+k)!=mpp.end())
            maxi=max(maxi,mpp.at(sum+k)-i);
            else
            mpp[sum]=i;
    }
    cout<<maxi;
}
