/*
Maximum sum subarray having sum less than or equal to given sum

You are given an array of non-negative integers and a target sum. Your task is to find a contiguous subarray whose sum is the maximum possible, while ensuring that it does not exceed the given target sum.

Note: The given array contains only non-negative integers.

Examples: 

Input: arr[] = [1, 2, 3, 4, 5], sum = 11
Output: 10
Explanation: Subarray having maximum sum is [1, 2, 3, 4]


Input: arr[] = [2, 4, 6, 8, 10], sum = 7
Output: 6
Explanation: Subarray having maximum sum is [2, 4]or [6]
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
Using Sliding Window - O(n) Time and O(n) Space
The maximum sum subarray can be found using a sliding window approach. Start by adding elements to curr_sum while it's less than the target sum. If curr_sum exceeds the sum, remove elements from the start until it fits within the limit. (Note: This method works only for non-negative elements.)
*/
int MaxSubArraySumLessthanK(vector<int> arr,int sum)
{
    int currsum=arr[0];
    int max_Sum=0;
    int start=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(currsum<=sum)
        max_Sum=max(max_Sum,currsum);
        while(start<i && currsum+arr[i]>sum)
        {
            currsum-=arr[start];
            start++;
        }
        if(currsum<0)
        currsum=0;
        currsum+=arr[i];
    }
    if(currsum<=sum)
        max_Sum=max(max_Sum,currsum);
    return max_Sum;
}
int main()
{
int sum=8;
vector<int> arr={1,2,3,4,5};
cout<<MaxSubArraySumLessthanK(arr,sum);
return 0;
}
