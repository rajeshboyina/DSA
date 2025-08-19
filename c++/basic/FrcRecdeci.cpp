#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
string calFra(int a,int b)
{
    if(a==0)
        return "0";
    string res=(a<0)^(b<0)? "-":"";
     a=abs(a);
     b=abs(b);
     int q=a/b;
     res+=to_string(q);
     //cout<<"res="<<res;
     //printf(" a=%d b=%d\n",a,b);
     int rem=a%b;
     cout<<"rem="<<rem<<endl;
     if(rem==0)
        return res;
     res.append(".");
     unordered_map<int,int> mp;
     while(rem>0)
     {
     if(mp.find(rem)!=mp.end()){
        res.insert(mp[rem],"(");
        res.append(")");
        break;
     }
     mp[rem]=res.size();
     rem=rem*10;
     res+=to_string(rem/b);
     rem=rem%b;
     }
     return res;
}
int main(){
    int a,b;
    cout<<"enter values of a,b:";
    cin>>a>>b;
    cout<<calFra(a,b);
    return 0;
}
