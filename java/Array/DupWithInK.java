import java.util.*;
class DupWithInK
{
    public static int DupInK(int[] arr,int k)
    {
        HashSet<Integer> Set=new HashSet<Integer>();
        int res=0;
        for(int i=0;i<arr.length;i++)
        {
            if(Set.contains(arr[i]))
            {
                res++;
            }
            Set.add(arr[i]);
            if(i>=k)
            Set.remove(arr[i-k]);
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
        System.out.println(DupInK(arr, k));
    }
}