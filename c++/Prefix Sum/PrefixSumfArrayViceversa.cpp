/*
Given an array arr[], Find the prefix sum of the array. A prefix sum array is another array prefixSum[] of the same size, such that prefixSum[i] is arr[0] + arr[1] + arr[2] . . . arr[i].

Examples: 

Input: arr[] = [10, 20, 10, 5, 15]
Output: [10, 30, 40, 45, 60]
Explanation: For each index i, add all the elements from 0 to i:
prefixSum[0] = 10, 
prefixSum[1] = 10 + 20 = 30, 
prefixSum[2] = 10 + 20 + 10 = 40 and so on.

Input: arr[] = [30, 10, 10, 5, 50]
Output: [30, 40, 50, 55, 105]
Explanation: For each index i, add all the elements from 0 to i:
prefixSum[0] = 30, 
prefixSum[1] = 30 + 10 = 40,
prefixSum[2] = 30 + 10+ 10 = 50 and so on.
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> PrefixSum(vector<int> arr)
{
    int n=arr.size();
    vector<int> Prefix(n,0);
    Prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        Prefix[i]=Prefix[i-1]+arr[i];
    }
    for(auto i: Prefix)
    cout<<i<<" ";
    return Prefix;

}
/*
ou are given a prefix sum array presum[] of an array arr[]. The task is to find the original array arr[] whose prefix sum is presum[].

Examples: 

Input:  presum[] = {5, 7, 10, 11, 18}
Output: [5, 2, 3, 1, 7]
Explanation: Original array {5, 2, 3, 1, 7} 
Prefix sum array = {5, 5+2, 5+2+3, 5+2+3+1, 5+2+3+1+7} = {5, 7, 10, 11, 18}
Each element of original array is replaced by the sum of the prefix of current index.

Input: presum[] = {45, 57, 63, 78, 89, 97}
Output: [45, 12, 6, 15, 11, 8] 
*/
void ArrayFromPrefixSum(vector<int> Prefix)
{
    int n=Prefix.size();
    vector<int> arr(n,0);
    arr[0]=Prefix[0];
    for(int i=1;i<n;i++)
    {
        arr[i]=Prefix[i]-Prefix[i-1];
    }
    for(auto i:arr)
    cout<<i<<" ";
}
int main()
{
    vector<int> arr={10, 20, 10, 5, 15};
    vector<int>Prefix=PrefixSum(arr);
    //PrefixSum(arr);
    cout<<endl;
    ArrayFromPrefixSum(Prefix);
    return 0;
}