import java.util.ArrayList;
import java.util.Scanner;
class Convertion
{
    public static int toDecimal(int[] ip,int s,int n)
    {
        int res=0;
        int e=1;
        for(int i=ip.length-1;i>=0;i--)
        {
            res+=(ip[i]*e);
            e=s*e;
        }
        return res;

    }
    static ArrayList fromDecimal(int t,int d)
    {
        ArrayList<Integer> res=new ArrayList<>();
        int e=d;
        res.add(t%e);
        t=t/e;
        while(t!=0)
        {
            res.add(0,t%e);
            t=t/e;
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
        for (int ele : ip) {
            System.out.println(ele);
        }
        if(src!=10)
        {
        int temp=toDecimal(ip, src, n);
        System.out.println("Decimal value"+temp);
        }
        else
        {
            int temp=Integer.parseInt(code);
        }
        int d=sc.nextInt();
        if(d!=10)
        {
        ArrayList<Integer> res=fromDecimal(temp, d);
        System.out.println(res);
        }
        else
        System.err.println(temp);
    }
}