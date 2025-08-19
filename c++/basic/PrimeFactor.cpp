#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    vector<int> pf;
    //prime factor 2
    if(num%2==0){
        pf.push_back(2);
        num/=2;
    }
        while(num%2==0) num/=2;
        for (int i=3;i<=sqrt(num);i=i+2)
        {
            if(num%i==0)
            {
                //cout<<"i="<<i<<"num="<<num<<endl;
                pf.push_back(i);
                while(num%i==0) num=num/i;
            }
        }
        if (num>2) pf.push_back(num);
         for(int i=0;i<pf.size();i++)
            cout<<pf[i]<<" ";
         return 0;

}
