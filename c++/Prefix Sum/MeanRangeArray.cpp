/*
Given an array arr[] of n integers and q queries represented by an array queries[][], where queries[i][0] = l and queries[i][1] = r. For each query, the task is to calculate the mean of elements in the range l to r and return its floor value.

Examples: 

Input: arr[] = [3, 7, 2, 8, 5] queries[][] = [[1, 3], [2, 5]]
Output: 4 5
Explanation: For query [1, 3] - Elements in range are 3, 7, 2
Mean is (3+7+2)/3 = 4, Floor value is 4
For query [2, 5] - Elements in range are 7, 2, 8, 5, 
Mean is (7+2+8+5)/4 = 5.5, Floor value is 5

Input: arr[] = [10, 20, 30, 40, 50, 60], queries[][] = [[4, 6]]
Output: 50
Explanation: For query [4, 6] - Elements in range are 40, 50, 60
Mean is (40+50+60)/3 = 50, Floor value is 50
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
    Prefix[i]=arr[i]+Prefix[i-1];
    for(auto i:Prefix) cout<<i<<" ";
    cout<<endl;
    return Prefix;
}
void MeanRangeArray(vector<int> arr,vector<vector<int>> Queries)
{
    vector<int> Prefix=PrefixSum(arr);
    int Sum=0;
    int n=arr.size();
    for(auto i:Queries)
    {
        if(i[0]>1)
        {
            Sum=Prefix[i[1]-1]-Prefix[i[0]-2];
            cout<<Sum/(i[1]-i[0]+1)<<endl;
        }
        else
        cout<<Prefix[i[1]-1]/i[1]<<endl;

    }
}
int main()
{
    vector<int> arr={3,7,2,8,5};
    vector<vector<int>> Queries={{1,3},{2,5},{1,5},{2,4}};
    MeanRangeArray(arr,Queries);
    return 0;
}