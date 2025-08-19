#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    int m,n,l=0;
    n=num;
    while(l<=n){
            cout<<l<<" "<<n<<endl;
        m=(int)(l+n)/2;
        if(m*m>num)
            n=m-1;
        else if(m*m<num)
            l=m+1;
        else
            brea
    }
    cout<<m;
    return 0;

}
