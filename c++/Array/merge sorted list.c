#include <iostream>
using namespace std
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
     if(list1[l]>list2[r])
        swap(list1[l],list2[r]);
     l--;
     r++;
 }
 sort(list1);
 sort(list2);
 for(auto i: list1)
    cout<<i<<" ";
 for(auto i: list2)
    cout<<i<<" ";
return 0;
}
