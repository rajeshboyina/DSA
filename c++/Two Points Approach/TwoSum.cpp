#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool HashSet(vector<int> arr,int target)
{
    unordered_map<int,int> Ele;
    for(auto i: arr)
    {
        if(Ele.find(i)!=Ele.end())
        Ele[i]++;
        else
        Ele[i]=1;
    }
    for(auto i:arr)
    {
        if((Ele.find(target-i)!=Ele.end()) | (target=2*i) & Ele[i]>1)
        return true;
    }
    return false;
}
bool Target(vector<int> arr,int target)
{
    sort(arr.begin(),arr.end());
    int l,h;
    l=0;
    h=arr.size()-1;
    while(h>-1 & l<h)
    {
        if(arr[l]+arr[h]>target)
            h--;
        else if(arr[l]+arr[h]<target)
            l++;
        else
            return true;
    }
    return false;
}
int main()
{
    vector<int> arr1={10,20,50,70,40,15,35,60};
    int target=50;
    cout<<HashSet(arr1,target);
    return 0;
}