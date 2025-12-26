import java.util.*;
class EqualSumSub{
    static ArrayList<Integer> KSumSubArray(int[] arr,int k)
    {
        ArrayList<Integer> res=new ArrayList<Integer>();
        int s,cs=0;
        s=0;
        for(int i=0;i<arr.length;i++)
        {
            s+=arr[i];
        }
        System.out.println(s);
        if(s%k!=0)
        {
        return res;
        }
        for(int i=0;i<arr.length;i++)
        {
            cs+=arr[i];
            if(cs==s/k)
            {
                cs=0;
                res.add(i);
            }
        }
        return res;
    }
    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int k=sc.nextInt();
        ArrayList<Integer> res=KSumSubArray(arr,k);
        if(res.size()==0)
        System.out.println("No such possible");
        else{
            for(int i:res)
            {
                System.out.print(i+" ");
            }
        }
    }
}