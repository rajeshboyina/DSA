#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int DupWithinK(vector<int> arr,int k)
{
    int res=0;
    unordered_set<int> mp;
    for(int i=0;i<arr.size();i++)
    {
        if(mp.find(arr[i])!=mp.end())
        {
            res++;
            cout<<i<<endl;
        }
            mp.insert(arr[i]);
            if(i>=k)
                mp.erase(arr[i-k]);
    }
    //for(int i=0;i<mp.size();i++)
    //    cout<<i<<" "<<mp[i]<<endl;
    return res;
}
int main(){
    int k=3;
    vector<int> arr={1,2,3,1,4,5,2,4};
    cout<<DupWithinK(arr,k);
return 0;
}