#include<iostream>
#include<unordered_map>
using namespace std;
int Mode(int *arr)
{
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,res=0;
    int ModeVal=0;
    unordered_map<int,int> List;
    for(i=0;i<n;i++)
    {
        List[arr[i]]++;
        if(res<List[arr[i]])
        {
            ModeVal=arr[i];
            res=List[arr[i]];
        }
    }
    return ModeVal;
}
int main()
{
    int arr[]={40, 50, 30, 40, 50, 30, 30};
    cout<<Mode(arr);
    return 0;
}