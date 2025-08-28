/*
We are given an array Arr[] of length n. It represents the price of a stock on ‘n’ days. The following guidelines need to be followed:

We can buy and sell a stock only once.
We can buy and sell the stock on any day but to sell the stock, we need to first buy it on the same or any previous day.
*/
#include<iostream>
#include<vector>
using namespace std;
int Profit(vector<int> arr)
{
    int n=arr.size();
    int Profit=0;
    int Min,CurrProfit=0;
    Min=arr[0];
    for(int i=1;i<n-1;i++)
    {
        CurrProfit=arr[i]-Min;
        Profit=max(Profit,CurrProfit);
        Min=min(Min,arr[i]);
    }
    return Profit;
}
int main()
{
    vector<int> arr={7,1,6,8,2};
    cout<<Profit(arr);
    return 0;
}