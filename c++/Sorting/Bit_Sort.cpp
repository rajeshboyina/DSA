#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int Count_bit(int a)
{
 int c=0;
 while(a)
 {
    if(a%2)
        c++;
    a/=2;
 }
 return c;
}
void Sort(vector<int>& arr)
{
    int c,m=0;
   unordered_map<int, vector<int>> cnt;
   for(auto i:arr)
   {
       c=Count_bit(i);
       cnt[c].push_back(i);
       m=max(m,c);

   }
   //sort(cnt.begin(),cnt.end());
   arr={};
   //m=cnt.size();
   for(int i=0;i<=m;i++)
    if(cnt.find(i)!=cnt.end())
   {
       for(auto j:cnt[i])
        arr.push_back(j);
   }
}
int main(){
vector<int> arr={5, 2, 3, 9, 4, 6, 7, 15, 32};
Sort(arr);
for(auto j: arr)
    cout<<j<<" ";
return 0;
}