#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    while(num>9)
    {
        int temp=0;
        while(num)
        {
            temp=temp+num%10;
            num=(int)(num/10);
        }
        num=temp;
        cout<<temp<<endl;
    }
    return 0;
}
