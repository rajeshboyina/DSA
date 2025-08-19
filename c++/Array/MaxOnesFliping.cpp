#include<iostream>
#include<vector>
using namespace std;
int Func(vector<int> arr,int k)
{
    int res=0;
    for(int i=0;i<arr.size();i++)
    {
        int cnt=0;
        for(int j=i;j<arr.size();j++)
        {
            if(arr[j]==0)
                cnt++;
            if(cnt<=k)
                res=max(res,(j-i+1));
        }
    }
    return res;
}
int main(){
vector<int> arr={1,0,0,1,1,0,1,0,1,1,1};
int k=2;
cout<<Func(arr,k);
return 0;
}