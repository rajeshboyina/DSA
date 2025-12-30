import java.util.*;
class UniqueEle
{
    static void Ue(int[] arr)
    {
        HashSet<Integer> set=new HashSet<>();
        for(int i=0;i<arr.length;i++)
        {
            if(set.contains(arr[i]))
            set.remove(arr[i]);
            else
            set.add(arr[i]);
        }
        System.out.print(set);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        Ue(arr);
    }
}