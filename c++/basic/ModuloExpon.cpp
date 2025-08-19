#include<iostream>
using namespace std;
int main(){
//(m^n)%k
    int m,n,k,res=1;
    cout<<"enter base,power,modulo:";
    cin>>m>>n>>k;
    while(n)
    {
        cout<<"n="<<n<<"res="<<res<<endl;
        if(n&1)
        {
            res=(res*m)%k;
            n-=1;
        }
        else
        {
            m=(m*m)%k;
            n/=2;
        }
    }
    cout<<res%k;
    return 0;
}
