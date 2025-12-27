#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void ArrI(vector<int>& arr)
{
    int i=0;
    while(i<arr.size())
    {
        if(arr[i]!=-1 && arr[i]!=arr[arr[i]])
            swap(arr[i],arr[arr[i]]);
        else
        i++;
    }
}
int main(){
vector<int> arr={-1,-1,6,1,9,3,2,-1,4,-1};
ArrI(arr);
for(auto i:arr)
    cout<<i<<" ";
return 0;
}