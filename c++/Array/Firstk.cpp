#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> Prority(vector<int> arr,int k)
{
    priority_queue<int ,vector<int>,greater<int>>
    minH(arr.begin(),arr.begin()+k);
    for(int i=k;i<arr.size();i++)
    {
        if(minH.top()<arr[i]){
            minH.pop();
            minH.push(arr[i]);
        }
    }
    vector<int> res;
    while(!minH.empty()){
        res.push_back(minH.top());
        minH.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    vector<int> arr={1,23,12,9,30,2,50};
    int k=3;
    vector<int> res=Prority(arr,k);
    for(auto i: res)
        cout<<i<<" ";
    return 0;
}
