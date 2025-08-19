#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int l=0,r=0;
    string s="abcdab";
    vector<int> map(256,-1);
    int n=6;
    int len=0;
    while(r<n)
    {
        if(map[s[r]]!=-1)
            l=max(map[s[r]]+1,l);
        map[s[r]]=r;
        len=max(len,r-l+1);
        r++;
    }
    cout<<len;
    return 0;
}
