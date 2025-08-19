#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool Meeting(vector<vector<int>> arr )
{
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i][1]>arr[i+1][0])
            return false;
    }
    return true;
}
int main()
{
vector<vector<int>> arr={{2, 4}, {1, 2}, {7, 8}, {5, 6}, {6, 8}};
if(Meeting(arr))
    cout<<"Schedule is correct";
else
    cout<<"schedule is not correct";
return 0;
}