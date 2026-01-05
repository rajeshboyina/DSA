import java.util.Scanner;
class DigRoot
{
    static int c(int val)
    {
        while(val>9)
        {
            //System.out.println("1 val:"+val);
            int temp=0;
            while(val!=0)
            {
                //System.out.println(" 1 temp:"+temp+"val :"+val);
                temp+=val%10;
                val=(int)(val/10);
            }
            val=temp;
            //System.out.println("2 val:"+val);
        }
        return val;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int val=sc.nextInt();
        val=c(val);
        System.out.print(val);
    }
}