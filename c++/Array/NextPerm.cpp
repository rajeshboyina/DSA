#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> NextPerm(vector<int> Arr)
{
    int i,n,ind;
    n=Arr.size();
    ind=-1;
    for(i=n-2;i>=0;i--)
    {
        if(Arr[i]<Arr[i+1])
        {
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(Arr.begin(),Arr.end());
    }
    else{
    for(i=n-1;i>ind;i--)
    {
        if(Arr[i]>Arr[ind])
        {
            swap(Arr[ind],Arr[i]);
        break;
        }
    }
    reverse(Arr.begin()+ind+1,Arr.end());
    }
    return Arr;
}
int main(){
    vector<int> Arr={2,1,5,4,3,0,0};
    for(auto i:Arr)
        cout<<i<<" ";
    cout<<"\n next prem\n";
    Arr=NextPerm(Arr);
    for(auto i: Arr)
        cout<<i<<" ";
    return 0;
}