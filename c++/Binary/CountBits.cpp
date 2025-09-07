#include<iostream>
#include<vector>
using namespace std;
vector<int> CountBits(int val)
{
    vector<int> ans(val+1,0);
    for(int i=1;i<=val;i++)
    {
        ans[i]=ans[i>>1]+(i&1);
    }
    return ans;
}