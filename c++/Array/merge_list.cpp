#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
 int list1[]={1,3,5,7,9};
 int list2[]={2,4,6,8};
 int m,n,l,r;
 m=5;
 n=4;
 l=m-1;
 r=0;
 while(l>=0 and r<n)
 {
 	cout<<"l=="<<l<<" r=="<<r<<endl;
 	for(int i=0;i<m;i++)
    cout<<list1[i]<<" ";
    cout<<endl;
 	for(int i=0;i<n;i++)
    cout<<list2[i]<<" ";
    cout<<endl;
     if(list1[l]>list2[r])
        swap(list1[l],list2[r]);
     l--;
     r++;
 }
 sort(list1,list1+m);
 sort(list2,list2+n);
 for(int i=0;i<m;i++)
    cout<<list1[i]<<" ";
 for(int i=0;i<n;i++)
    cout<<list2[i]<<" ";
return 0;
}

