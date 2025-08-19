#include<iostream>
#include<vector>
using namespace std;
void EvenGreat(vector<int>& arr)
{
    for(int i=1;i<arr.size();i++)
    {
        //odd
        if(i%2)
        {
            if(arr[i-1]>arr[i])
                swap(arr[i-1],arr[i]);
        }
        else
        {
            if(arr[i-1]<arr[i])
                swap(arr[i-1],arr[i]);
        }
    }
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8};
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    EvenGreat(arr);
    for(auto i: arr)
    {
        cout<<i<<" ";
    }

return 0;
}