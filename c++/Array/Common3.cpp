#include<iostream>
#include<vector>
using namespace std;
vector<int> Common(vector<int> arr1,vector<int> arr2,vector<int> arr3)
{
    vector<int> res;
    int n1,n2,n3,i,j,k;
    i=0;
    j=0;
    k=0;
    n1=arr1.size();
    n2=arr2.size();
    n3=arr3.size();
    while(i<n1 && j<n2 && k<n3)
    {
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
        {
            res.push_back(arr1[i]);
            i++;
            j++;
            k++;
            while(i<n1 && arr1[i]==arr1[i-1])
                i++;
            while(j<n2 && arr2[j]==arr2[j-1])
                j++;
            while(k<n3 && arr3[k]==arr3[k-1])
                k++;
        }
        else if(arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr3[k])
            j++;
        else
            k++;
    }
    return res;
}
int main(){
vector<int> arr1,arr2,arr3,res;
arr1={1,3,5,7,9};
arr2={2,3,4,5,6};
arr3={2,3,5,7};
res=Common(arr1,arr2,arr3);
for(auto i:res)
    cout<<i<<endl;
}
