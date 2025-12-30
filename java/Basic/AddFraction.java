import java.util.*;
class AddFraction
{

    private static int lcm(int n1,int n2)
    {
        int a,b,c;
        a=Math.max(n1,n2);
        b=Math.min(n1,n2);
        c=a%b;
        while(c!=0)
        {
            b=a;
            a=c;
            c=b%a;
        }
        return (int)((n1*n2)/a);
    }
    public static Fraction Add(Fraction fr1,Fraction fr2)
    {
     Fraction fr=new Fraction(0,0);   
    fr.Dr=lcm(fr1.Dr,fr2.Dr);
    fr.Nr=(fr.Dr*fr1.Nr)/fr2.Dr+(fr.Dr*fr2.Nr)/fr2.Dr;
    return fr;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n,d;
        n=sc.nextInt();
        d=sc.nextInt();
        Fraction fr1=new Fraction(n,d);
        n=sc.nextInt();
        d=sc.nextInt();
        Fraction fr2=new Fraction(n,d);
        //Fraction fr3=new Fraction(0,0);
        Fraction fr3=Add(fr1,fr2);
        System.out.print(fr3.Nr+"  "+fr3.Dr);
    }
}
class Fraction{
    int Nr;
    int Dr;

    public Fraction(int Nr, int Dr) {
        this.Nr = Nr;
        this.Dr = Dr;
    }
    
}