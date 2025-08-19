#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[]={1,2,3,2};
    int n=4;
    int k=2;
 int xr=0;
 map<int,int> mpp;
 mpp[xr]++;//{0,1}
 int cnt=0;
 for(int i=0;i<n;i++)
 {
     xr=xr^arr[i];
     //k
     int x= xr^k;
     cnt+=mpp[x];
     mpp[xr]++;
 }
 cout<<cnt;
}
