#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MinCost(vector<int> arr,int k)
{
    int res=0;
    int m=*max_element(arr.begin(),arr.end());
    for(auto i:arr)
    {
        if((m-i)%k!=0)
        return -1;
        res+=(int)((m-i)/k);
}
return res;


}
int main(){
vector<int> arr={3,7,11,15};
int k=4;
cout<<MinCost(arr,k);
return 0;
}