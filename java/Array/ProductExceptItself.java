import java.util.Scanner;
class ProductExceptItself{
    static int[] Product(int[] arr)
    {
        int n=arr.length;
        int[] res=new int[n];
        int[] prefixProd=new int[n];
        int[] sufixProd=new int[n];
        prefixProd[0]=1;
        sufixProd[n-1]=1;
        for(int i=1;i<n;i++)
        {
        prefixProd[i]=arr[i-1]*prefixProd[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
        sufixProd[i]=sufixProd[i+1]*arr[i+1];
        //System.out.print(sufixProd[i]+","+i);
        }
        for(int i=0;i<n;i++)
        {
            res[i]=sufixProd[i]*prefixProd[i];
        }
        return res;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        arr=Product(arr);
        for (Object elem : arr) {
            System.out.print(elem+" ");
        }
    }
}