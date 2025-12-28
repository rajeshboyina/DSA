import java.util.*;
class MergeOverlappingInt
{
    static void Merge(int[][] arr)
    {
        List<int[]> res=new ArrayList<>();
        int n=arr.length;
        for(int i=0;i<n;i++)
        {
            if(res.isEmpty()||res.getLast()[1]<arr[i][0])
            res.add(arr[i]);
            else
            res.getLast()[1]=Math.max(res.getLast()[1],arr[i][1]);

        }
        for (int[] elem : res) {
            System.out.println(elem[0]+" "+elem[1]);
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[][] arr=new int[n][2];
        for(int i=0;i<n;i++)
        {
            arr[i][0]=sc.nextInt();
            arr[i][1]=sc.nextInt();
        }
        Merge(arr);
    }

}