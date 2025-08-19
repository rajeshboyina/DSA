#include<iostream>
#include<vector>
using namespace std;
void sum(vector<int> arr,int i,int s,vector<int>& res)
{
    if(i>=arr.size())
        res.push_back(s);
    else{
        sum(arr,i+1,s+arr[i],res);
        sum(arr,i+1,s,res);
    }
}
int main()
{
    vector<int> arr={1,2,3};
    vector<int> res={};
    sum(arr,0,0,res);
    for(auto i: res)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}