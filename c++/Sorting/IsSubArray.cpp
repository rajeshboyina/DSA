#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool IsSubarry(vector<int> arr, vector<int> a)
{
    sort(arr.begin(),arr.end());
    sort(a.begin(),a.end());
    int i,j,m,n;
    m=arr.size();
    n=a.size();
    if(arr[m-1]<a[n-1])
        return false;
    i=0;
    j=0;
    while(i<m && j<n){
        if(arr[i]==a[j])
        {
            i++;j++;
        }
        else if(arr[i]<a[j])
            i++;
        else
            return false;
    }
    return true;
}
int main(){
vector<int> arr={1,2,3,4,5,7};
vector<int> a={5,4,6};
cout<<IsSubarry(arr,a);
return 0;
}