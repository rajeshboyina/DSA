#include<iostream>
#include<vector>
using namespace std;
vector<int> ThreeSumSubArray(vector<int> arr)
{
    vector<int> res;
    int sum=0;
    for(auto i: arr)
    {
        sum+=i;
    }
    if(sum%3!=0)
    {
        res={1,1};
        return res;
    }
    int cSum=0;
    for(int i=0;i<arr.size();i++)
    {
        cSum+=arr[i];
        if(cSum==sum/3)
        {
            cSum=0;
            res.push_back(i);
        }
        if(res.size()==2)
        {
            return res;
        }
    }
    res={-1,-1};
    return res;
}
int main(){
vector<int> arr={1,0,-1,2,1,0};
vector<int> res;
res=ThreeSumSubArray(arr);
for(auto i:res)
    cout<<i<<" ";
return 0;
}