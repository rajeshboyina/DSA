#include<iostream>
#include<vector>
using namespace std;
void Sort(string &Ip)
{
    char dict[26]={0};
    int n=Ip.size();
    for(int i=0;i<n;i++)
    {
        dict[(int)(Ip[i]-'a')]++;
    }
    int k=0;
    for(int i=0;i<26;i++){
        while(dict[i])
    {
        Ip[k++]='a'+i;
        dict[i]--;
    }
    }
    return;
}
int main(){
string ip;
cin>>ip;
Sort(ip);
cout<<ip;
return 0;
}