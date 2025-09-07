// powerset using recursion
#include <iostream>
#include <vector>
using namespace std;

void SubSeq(int ind, vector<int> &ds, int arr[], int n) {
    if (ind == n) {
        if (ds.empty())
            cout << "{}";
        else {
            for (auto i : ds)
                cout << i;
        }
        cout <<",";
        return;
    }

    // not take
    SubSeq
(ind + 1, ds, arr, n);

    // take
    ds.push_back(arr[ind]);
    SubSeq
(ind + 1, ds, arr, n);
    ds.pop_back();
}
void Sumk(int ind,vector<int> &ds,int s, int sum,int arr[],int n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            for(auto i:ds) cout<<i<<" ";
            cout<<",";
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    Sumk(ind+1,ds,s,sum,arr,n); 
    s-=arr[ind];
    ds.pop_back();
    Sumk(ind+1,ds,s,sum,arr,n);

}
int main() {
    int n;
    cin>>n;
    int arr[n] ;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> ds;
    SubSeq
(0, ds, arr, n);
Sumk(0,ds,0,4,arr,n);
    return 0;
}
