#include<iostream>
#include<vector>
using namespace std;
bool Find(vector<int> arr,int target)
{
    int i;
    for(i=0;i<arr.size()-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            break;
        }
    }
    int l=i+1;
    int n=arr.size();
    int h=i;
    while(l!=h)
    {
        if(arr[l]+arr[h]==target)
        return true;
        else if(arr[l]+arr[h]<target)
        l=(l+1)%n;
        else
        h=(h-1)%n;
    }
    return false;
}
int main(){
    vector<int> arr={11, 15, 6, 8, 9, 10};
    int target=20;
    cout<<Find(arr,target);
    return 0;
}