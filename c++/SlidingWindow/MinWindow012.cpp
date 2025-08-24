//problem
void problem(){
    /*
    Smallest window containing 0, 1 and 2

Given a string S of size N consisting of the characters 0, 1 and 2, the task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1.*/
}
void examples (){
/*
Examples:
Input: S = "01212"
Output: 3
Explanation: The substring 012 is the smallest substring that contains the characters 0, 1 and 2.
Input:  S = "12121"
Output: -1
Explanation:  As the character 0 is not present in the string S, therefore no substring containing all the three characters 0, 1 and 2 exists. Hence, the answer is -1 in this case.
*/
//MinWindow012.cpp
//Rajesh Boyina
//24-08-2025
}
#include<iostream>
#include<vector>
using namespace std;
int IndexBased(vector<int> arr)
{
    int i=0,z=0,o=0,t,res=__INT_MAX__;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
        z=i+1;
        if(arr[i]==1)
        o=i+1;
        if(arr[i]==2)
        t=i+1;
        if(z!=-1&& o!=-1 & t!=-1)
        {
            res=min(res,
            max(z,max(o,t))-min(z,min(i,o)));
        }
    }
    if(res!=__INT_MAX__)
    return res+2;
    else
    return -1;
}
int main(){
    vector<int> arr={0,2,0,1,0,2,1,0,2,1,0};
    cout<<IndexBased(arr);
    return 0;
}
