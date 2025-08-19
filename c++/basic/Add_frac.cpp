#include<iostream>
using namespace std;
struct fration{
       int Nr;
       int Dr;
       };
int lcm(int x, int y){
    //finding gdc
    int a,b,c;
    a=min(x,y);
    b=max(x,y);
    c=b%a;
    while(c)
    {
            b=a;
            a=c;
            c=b%a;
            }
    return (int)((x*y)/a);
}
fration fract_add(fration f1,fration f2)
{
                fration op_fr;
                op_fr.Dr=lcm(f1.Dr,f2.Dr);
                op_fr.Nr=(op_fr.Dr*f1.Nr)/f1.Dr+(op_fr.Dr*f2.Nr)/f2.Dr;
                return op_fr;
                }
int main(){
    fration f1={2,3},f2={3,5};
    fration op_fr=fract_add(f1,f2);
    printf("Numerator: %d, Denomenator: %d",op_fr.Nr,op_fr.Dr);
    return 0;
}
