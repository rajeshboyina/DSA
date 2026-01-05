import java.util.*;
class PrimeNumber
{
    public static ArrayList Prime(int n)
    {
        boolean[] arr=new boolean[n+1];
        arr[0]=true;
        arr[1]=true;
        int i=2;
        while((i<=n) )
        {
            if(!arr[i]){
            for(int j=i*i;j<=n;j+=i)
            arr[j]=true;
            }
                i++;
        }
        //return arr;
        ArrayList<Integer> pri=new ArrayList<>();
        for(int k=0;k<=n;k++)
        {
        if(!arr[k])
        pri.add(k);
        }
        return pri;

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Integer> prime=Prime(n);
        for(int ele:prime)
        System.out.print(ele+" ");
    }
}