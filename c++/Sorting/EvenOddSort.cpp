#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Sort(vector<int> &arr)
{
    int n=arr.size();
    int i=0;
    while(i<n)
    {
        if(i%2==0)
            arr[i]=-arr[i];
        i++;
    }
    sort(arr.begin(),arr.end());
    i=0;
    while(i<n && arr[i]<0)
        i++;
    int l=i;
    i=0;
    while(i<l)
    {
        arr[i]=-arr[i];
        i++;
    }
reverse(arr.begin(),arr.begin()+l);
reverse(arr.begin()+l,arr.end());
}
int main()
{
    vector<int> arr={1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    cout<<"1, 5, 8, 9, 6, 7, 3, 4, 2, 0"<<endl;
    Sort(arr);
    for(auto i:arr)
        cout<<i<<" ";
    return 0;
}