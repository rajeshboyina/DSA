#include<iostream>
#include<vector>
using namespace std;
void res_arr(vector<int>& arr,int s,int e,vector<vector<int>>& res)
{
    if(size(arr)==e)
        return;
    else if (s>e)
        res_arr(arr,0,e+1,res);
    else
    {
        vector<int> t;
        for (int i=s;i<e;i++)
        {
            t.push_back(arr[i]);
        }
        res.push_back(t);
        res_arr(arr,s+1,e,res);
    }
}
int main(){
//int i,j,k,n=4;
vector<vector<int>> res;
/*
for(i=1;i<=n;i++)
{
    for(j=i;j<=n;j++)
    {
        vector<int> t;
        for(k=i;k<=j;k++)
        {
            t.push_back(k);
            cout<<k<<" ";
        }
        res.push_back(t);
        cout<<endl;
    }
    //cout<<endl;
}

*/

vector<int> k={1,2,3,4,5};
res_arr(k,0,1,res);
for(auto i:res)
{
    for(auto j:i)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0;
}
