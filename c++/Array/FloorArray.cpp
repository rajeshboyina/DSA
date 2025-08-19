#include<iostream>
#include<vector>
using namespace std;
int Floor(vector<int> arr,int k,int l,int r)
{
    int m=(l+r)/2;
    if(r<l)
    {
        cout<<"1 :l:"<<l<<" r:"<<r<<endl;
        return r;
    }
    else if(l<0 || r<0)
        return -1;
    else if(arr[m]==k)
    {
        cout<<"2 m:"<<m<<endl;;
        return m;
         }
    else if(l==r )
    {
    cout<<"3 l:"<<l<<endl;
        return l;
    }
    else if(arr[m]>k)
    {
        cout<<"4 l:"<<l<<" r:"<<m-1<<endl;
        return Floor(arr,k,l,m-1);
    }
    else{
        cout<<"5 l:"<<m+1<<" r:"<<r<<endl;
        return Floor(arr,k,m+1,r);
}
}
int main()
{
    vector<int> arr={2,5,7,9,10,12,14,16};
    int k=6;
    cout<<Floor(arr,k,0,arr.size()-1);
    return 0;

}