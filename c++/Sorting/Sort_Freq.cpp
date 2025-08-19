#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> SortFreq(vector<int> arr)
{
    sort(arr.begin(),arr.end());
    auto comp=[&](vector<int> &a,vector<int> &b)
    {
        if(a[0]==b[0])
            return a[1]<b[1];
        return a[0]>b[0];
    };
    vector<vector<int>> freq;
    int n=arr.size();
    int cnt,i=0;
    while(i<n)
    {
        cnt=1;
        while(i<n-1 && arr[i]==arr[i+1])
        {
            cnt++;
            i++;
        }
        freq.push_back({cnt,arr[i]});
        i++;
    }
    sort(freq.begin(),freq.end(),comp);
    vector<int> ans;
    for(int i=0;i<freq.size();i++)
        for(int j=0;j<freq[i][0];j++)
        ans.push_back(freq[i][1]);
    return ans;
}
int main(){
vector<int>num={5,2,6,8,2,5,6,4,2,5,7,7,8};
vector<int> ans;
ans=SortFreq(num);
for(auto i:ans)
    cout<<i<<" ";
return 0;
}