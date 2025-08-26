//Count Strictly Increasing Subarrays
//problem
/*
Given an integer array arr[], the task is to count the number of subarrays in arr[] that are strictly increasing and have a size of at least 2. A subarray is a contiguous sequence of elements from arr[]. A subarray is strictly increasing if each element is greater than its previous element.
*/
//example
/*
Input: arr[] = [1, 4, 5, 3, 7, 9]
Output: 6
Explanation: The strictly increasing subarrays are: [1, 4], [1, 4, 5], [4, 5], [3, 7], [3, 7, 9], [7, 9]

Input: arr[] = [1, 3, 3, 2, 3, 5]
Output: 4
Explanation: The strictly increasing subarrays are: [1, 3], [2, 3], [2, 3, 5], [3, 5] 

Input: arr[] = [2, 2, 2, 2]
Output: 0
Explanation: No strictly increasing subarray exists.
*/
#include<iostream>
#include<vector>
using namespace std;
//Approch 1 Generate All Subarrays - O(n3) Time and O(1) Space
/*
The idea is to iterate through all possible subarrays and check if they are strictly increasing. For each starting index, we expand the subarray and compare consecutive elements. If any element is not greater than the previous one, we stop checking further for that subarray. We increment the count for each valid subarray found.
*/
int Approach1(vector<int> arr)
{
    int i,j,k,count=0,n=arr.size();
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            bool IsIncreasing=true;
            for(k=i;k<j;k++)
            {
                if(arr[k]>=arr[k+1])
                {
                    IsIncreasing=false;
                    break;
                }
            }
            if(IsIncreasing)
            count++;
        }
    }
    return count;
}
//Approack -2 Check All Subarrays using 2 Nested Loops - O(n2) Time and O(1) Space
/*
The idea is to count all strictly increasing subarrays efficiently by expanding from each starting index i. Instead of checking every possible subarray, we extend j while the sequence remains increasing and stop immediately when it breaks.
*/
int Approach2(vector<int> arr)
{
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j-1]>=arr[j])
            break;
            count++;
        }
    }
    return count;
}
//Approach 3 Length-Based formula-O(n) time and O(1) Space
/*
The idea is to count all strictly increasing subarrays efficiently by using a single pass through the array. Instead of checking every subarray explicitly, we track the length of increasing segments using len. When a decreasing element is encountered, we use the formula (len * (len - 1)) / 2 to count subarrays formed by the segment and then reset len. Finally, we add the remaining subarrays after the loop ends.

Steps to implement the above idea:

Initialize count to store the number of strictly increasing subarrays and len to track the length of increasing sequences.
Iterate through the array starting from index 1, comparing each element with its previous element to check for increasing order.
If the current element is greater than the previous, increment len as it extends the increasing subarray.
If the current element breaks the increasing sequence, update count using the formula (len*(len-1))/2 and reset len to 1.
Continue iterating until the end of the array, applying the same logic for each increasing and non-increasing sequence.
After the loop, add the remaining subarrays count using (len * (len - 1)) / 2 to include the last segment.
Finally, return count, which holds the total number of strictly increasing subarrays in the given array.
*/
int Approach3(vector<int> arr)
{
    int count=0;
    int n=arr.size();
    int len=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]<arr[i])
        len++;
        else
        {
            count+=(len*(len-1))/2;
            len=1;
        }
    }
    count+=(len*(len-1))/2;
    return count;
}
int main()
{
    vector<int> arr={1,4,5,3,7,9};
    cout<<"Approach -1 :"<<Approach1(arr)<<endl;
    cout<<"Approach -2 :"<<Approach2(arr)<<endl;
    cout<<"Approach -3 :"<<Approach3(arr)<<endl;
    return 0;
}