import java.util.Scanner;
class Convertion
{
    public static int toDecimal(int[] ip,int s,int n)
    {
        int res=0;
        int e=0;
        for(int i=ip.length-1;i>=0;i--)
        {
            res+=ip[i]*e;
            e*=s;
        }
        return res;

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String code=sc.next();
        int n=code.length();
        int [] ip=new int[n];
        for(int i=0;i<n;i++)
        {
            char curr=code.charAt(i);
            if(curr>'9')
            {
                ip[i]=curr-'7';
            }
            else
            {
                ip[i]=curr-'0';
            }       
        }
        int src=sc.nextInt();
        System.out.println(toDecimal(ip,src,n));
    }
}