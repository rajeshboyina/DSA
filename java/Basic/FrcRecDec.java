import java.util.*;
class FrcRecDec
{
    static String calFra(int a,int b)
    {
        if(a==0)
        return "0";
        String res=new String();
        res=(a<0)^(b<0)?"-":"";
        a=Math.abs(a);
        b=Math.abs(b);
        int q=a/b;
        int rem=a%b;
        if(rem==0)
        return res;
        res.concat(".");
        
    }
}