#include<iostream>
#include<vector>
using namespace std;
int main(){
 int x=5;
 vector<int> bin;
 while(x)
 {
     bin.push_back(x%2);
     x=(int)(x/2);
 }
  //bin=reverse(bin.begin(),bin.end());
 for(int i=size(bin)-1;i>=0;i--)
 {
     cout<<bin[i]<<" ";
 }
 return 0;
}
