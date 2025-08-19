#include<iostream>
#include<vector>
using namespace std;
void SingleTraversal(vector<int> &arr)
{
    int c=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=0){
            swap(arr[c],arr[i]);
        c++;}
    }
    return ;
}
void TwoTraversal(vector<int>& arr)
{
    int c=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=0)
            arr[c++]=arr[i];
    }
    while(c<arr.size())
        arr[c++]=0;
    return ;
}
int main(){
    vector<int> arr={1,2,3,0,4,0,5,0};
    for(auto i:arr)
        cout<<i<<" ";
    cout<<endl;
    SingleTraversal(arr);
    //TwoTraversal(arr);
    for(auto i:arr)
        cout<<i<<" ";
    return 0;
}