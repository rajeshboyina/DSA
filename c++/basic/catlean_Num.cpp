#include<iostream>
using namespace std;
int find_catlean(int n)
{
    int catlean[n+1];
    catlean[0]=catlean[1]=1;
    for(int i=2;i<=n;i++)
    {
        //cdcout<<catlean[i]<<endl;
        catlean[i]=0;
        for(int j=0;j<i;j++)
        {
            catlean[i]+=catlean[j]*catlean[i-j-1];
        }
        cout<<catlean[i]<<endl;
    }
    return catlean[n];
}
int main(){
    int n;
    //cout<<"enter number";
    cin>> n;
    cout<<find_catlean(n);
    return 0;
    }
