#include<iostream>
#include<vector>
using namespace std;
vector<int> Intersection(vector<int> a,vector<int>b)
{
    int n,m,i,j;
    vector<int> res;
    n=a.size();
    m=b.size();
    i=0;
    j=0;
    while(i<n && j<m){
        if(( i>0 && a[i-1]==a[i])|| a[i]<b[j])
            i++;
        else if (a[i]>b[j])
            j++;
        else
        {
            res.push_back(a[i]);
            i++;
            j++;
        }
    }
    return res;
}
vector<int> Union(vector<int> a, vector<int> b)
{
    int n,m,i,j;
    vector<int> res;
    n=a.size();
    m=b.size();
    i=0;
    j=0;
    res.push_back(min(a[0],b[0]));
    while(i<n && j<m){
        if(i>0 && a[i-1]==a[i]){
        i++;
        continue;
        }
        if(j>0 && b[j-1]==b[j])
        {
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            res.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j])
        {
            res.push_back(b[j]);
            j++;
        }
        else
        {
            res.push_back(a[i]);
            i++;
            j++;
        }
    }
    while(i<n)
    {
        if(a[i]!=res[res.size()-1])
            res.push_back(a[i]);
        i++;
    }
    while(j<m)
    {
    if(b[j]!=res[res.size()-1])
            res.push_back(b[j]);
        j++;
    }
    return res;
}
int main()
{
    vector<int> a={3, 5, 10, 10, 10, 15, 15, 20};
    vector<int> b={5, 10, 10, 15, 30};
    vector<int> inter=Intersection(a,b);
    for(auto i: inter)
        cout<<i<<" ";
    cout<<endl;
    vector<int> unionV=Union(a,b);
    for(auto i: unionV)
        cout<<i<<" ";
}