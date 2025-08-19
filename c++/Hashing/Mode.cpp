#include<iostream>
#include<unordered_map>
using namespace std;
/*
Minimum Subsets with Distinct Elements
You are given an array of n-element. You have to make subsets from the array such that no subset contain duplicate elements. Find out minimum number of subset possible.

Examples :

Input : arr[] = {1, 2, 3, 4}
Output :1
Explanation : A single subset can contains all values and all values are distinct.

Input : arr[] = {1, 2, 3, 3}
Output : 2
Explanation : We need to create two subsets {1, 2, 3} and {3} [or {1, 3} and {2, 3}] such that both subsets have distinct elements.

[Naive Solution] - Nested Loops - O(n^2) Time and O(1) Space
Let us take a look at few observations.

If all elements are distinct, we need to make only one subset.
If all elements are same, we need make n subsets.
If an element appears twice, and all other are distinct, we need to make two subsets,
Did you see any pattern?
We basically need to find the most frequent element in the array. The result is equal to the frequency of the most frequent element. Since we have to create a subset such that each element in a subset is unique that means that all the repeating elements should be kept in a different set. Hence the maximum no subsets that we require is the frequency of the maximum time occurring element.

Ex -> { 1 , 2 , 1 , 2 , 3 , 3 , 2 , 2 }
here
Frequency of 1 -> 2
Frequency of 2 -> 4
Frequency of 3 -> 2

Since the frequency of 2 is maximum hence we need to have at least 4 subset to keep all the 2 in different subsets and rest of element can be occupied accordingly.
*/
int Mode(int *arr)
{
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,res=0;
    int ModeVal=0;
    unordered_map<int,int> List;
    for(i=0;i<n;i++)
    {
        List[arr[i]]++;
        if(res<List[arr[i]])
        {
            ModeVal=arr[i];
            res=List[arr[i]];
        }
    }
    return ModeVal;
}
int main()
{
    int arr[]={40, 50, 30, 40, 50, 30, 30};
    cout<<Mode(arr);
    return 0;
}