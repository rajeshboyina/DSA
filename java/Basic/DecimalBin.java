import java.util.*;
class DecimalBin
{
    public static List Con(int val)
    {
       List<Integer> b=new ArrayList<>();
       while(val!=0)
       {
            b.add(val%2);
            val=(int)(val/2);
       } 
       return b;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int val=sc.nextInt();
        List<Integer> b=Con(val);
        for(int i=b.size()-1;i>-1;i--)
        System.out.print(b.get(i)+" ");
    }
}