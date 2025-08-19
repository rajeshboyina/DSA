#include<iostream>
#include<vector>
using namespace std;
void Mul(vector<int>arr)
{
    int n=arr.size();
    vector<int> PrefixPro(n),SuffixPro(n),res(n);
    PrefixPro[0]=1;
    SuffixPro[n-1]=1;
    for (int i=1;i<n;i++)
        PrefixPro[i]=PrefixPro[i-1]*arr[i-1];
    for(int i=n-2;i>=0;i--)
        SuffixPro[i]=SuffixPro[i+1]*arr[i+1];

    for(int i=0;i<n;i++)
        res[i]=PrefixPro[i]*SuffixPro[i];
    //for(auto i: PrefixPro)
    //    cout<<i<<" ";
    //cout<<endl;
    for(auto i:res)
        cout<<i<<" ";

}
int main(){
vector<int> arr={10, 3, 5, 6, 2};
Mul(arr);
return 0;
}