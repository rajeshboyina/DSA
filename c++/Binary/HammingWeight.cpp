#include<iostream>
#include<vector>
using namespace std;
int Count1InBinary(int val)
{
    int count=0;
    while(val)
    {
        cout<<val<<" "<<count<<endl;
        count+=val&1;
        val>>=1;
    }
    return count;
}
int main()
{
    int val;
    cin>>val;
    cout<<Count1InBinary(val);
    return 0;
}