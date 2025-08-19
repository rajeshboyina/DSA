#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int arr[]={1, 2, -2, 4, -4};
    int n=5;
    unordered_map<int,int> mpp;
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if (sum==0)
            maxi==i+1;
        else
        {
            if(mpp.find(sum)!=mpp.end())//checking the sum in hash map if found compare with max interval
            {
                maxi=max(maxi,i-mpp[sum]);
            }
            else
            {
                mpp[sum]=i;
            }
        }
    }
    cout<<maxi;
    return 0;
}
