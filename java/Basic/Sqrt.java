import java.util.*;
class sqrt
{
    public static int SquareRoot(int num)
    {
        int n,m,l=1;
        n=num;
        m=(int)((l+n)/2);
        while(l<=n)
        {
            m=(int)((l+n)/2);
            if(m*m<num)
            l=m+1;
            else if (m*m>num)
            n=m-1;
            else
            break;
        }
        return m;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.print(SquareRoot(n));
    }
}