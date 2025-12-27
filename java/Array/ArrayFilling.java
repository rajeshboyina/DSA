import java.util.Scanner;
class ArrayFilling{
    static int[] Array(int[] arr)
    {
        int i=0;
        while(i<arr.length)
        {
            if (arr[i]!=-1 && arr[i]!=arr[arr[i]])
            {
                int temp=arr[i];
                arr[i]=arr[arr[i]];
                arr[temp]=temp;
            }
            else
            i++;
        }
        return arr;
    }
    public static void main(String[] args) {
        int n;
        Scanner s= new Scanner(System.in);
        n=s.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=s.nextInt();
        }
        arr=Array(arr);
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]+" ");
        }
    }
}