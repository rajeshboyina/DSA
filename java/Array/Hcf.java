import java.util.Scanner;
class hcf
{
    public static int h(int[] arr)
    {
        int n=arr.length;
        int min= arr[0];
        for(int i=1;i<n;i++)
        {
            if(min>arr[i])
            min=arr[i];
        }
        while(min>0)
        {
            int c=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]%min==0)
                c++;
                else
                break;
            }
            if(c==n)
            break;
            min--;
        }
        return min;

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int [] arr= new int[n];
        for(int i=0;i<n;i++)
        arr[i]=sc.nextInt();
        System.out.println(h(arr));
    }
}
