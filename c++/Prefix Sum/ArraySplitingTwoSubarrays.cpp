/*
Given an array of integers greater than zero, find if it is possible to split it in two subarrays (without reordering the elements), such that the sum of the two subarrays is the same. Print the two subarrays.

Examples : 

Input : Arr[] = { 1 , 2 , 3 , 4 , 5 , 5  }
Output :  { 1 2 3 4 } 
          { 5 , 5 }

Input : Arr[] = { 4, 1, 2, 3 }
Output : {4 1}
         {2 3}

Input : Arr[] = { 4, 3, 2, 1}
Output : Not Possible
*/
#include<iostream>
#include<vector>
using namespace std;
void Printing(vector<int> arr,int i,int j)
{
    for (int k=i;k<=j;k++)
    cout<<arr[k]<<" ";
}
void ArraySplitingTwoSubarrays(vector<int> arr)
{
    int n=arr.size();
    vector<int> Prefix(n,0),Suffix(n,0);
    bool found=true;
    Prefix[0]=arr[0];
    Suffix[n-1]=arr[n-1];
    for(int i=1;i<n;i++)
    {
        Prefix[i]=Prefix[i-1]+arr[i];
        Suffix[n-1-i]=Suffix[n-i]+arr[n-1-i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(Prefix[i]==Suffix[i+1])
        {
            found=false;
            Printing(arr,0,i);
            cout<<endl;
            Printing(arr,i+1,n-1);
            break;
        }
    }
    if(found)
    cout<<"Not Possible";

}
int main()
{
    vector<int> arr={1,2,3,4,5,5};
    ArraySplitingTwoSubarrays(arr);
    return 0;
}