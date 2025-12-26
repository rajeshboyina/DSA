#include<iostream>
#include<vector>
using namespace std;
void Print(vector<int> arr,int n)
{
    if(n<0)
    return;
    cout<<arr[n]<<" ";
    Print(arr,--n);
    //cout<<n;
}
void Sum(int i,int res)
{
    if(i==0){
    cout<<res;
    return;
    }
    Sum(i-1,res+i);
}
void Reverse(int l,int h,vector<int> arr)
{
    if(l>=h)
    return;
    swap(arr[l],arr[h]);
    Reverse(++l,--h,arr);
}
int main(){
    // cout<<endl;
    // Sum(6,0);
    // cout<<endl;
    vector<int> arr={6,2,8,4,5,3,7};
    Print(arr,arr.size()-1);
    // for(auto i:arr)
    // cout<<i<<" ";
    // cout<<endl;
    // Reverse(0,arr.size()-1,arr);
    // for(auto i: arr)
    // cout<<endl;
    return 0;
}