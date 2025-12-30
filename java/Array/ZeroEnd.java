import java.util.Scanner;
class ZeroEnd
{
    static int[] End(int[] arr)
    {
        int c,n=arr.length;
        c=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i]!=0)
        //         arr[c++]=arr[i];
        // }
        // while(c<n)
        // arr[c++]=0;
        // return arr;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                if(c!=i)
                {
                    int temp=arr[c];
                    arr[c]=arr[i];
                    arr[i]=temp;
                }
                c++;
            }
        }
        return arr;
    }
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        arr=End(arr);
        for(int i:arr)
        System.out.print(i+" ");
    }
}