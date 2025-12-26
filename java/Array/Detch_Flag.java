import java.util.Scanner;

class Detch_Flag
{
    public int[] flag(int[] arr1)
    {
        int l,m,h,temp;
        l=0;
        m=0;
        h=arr1.length-1;
        while(m<=h)
        {
            if(arr1[m]==0)
            {
                if(arr1[l]!=arr1[m])
                {
                    temp =arr1[l];
                    arr1[l]=arr1[m];
                    arr1[m]=temp;
                }
                l+=1;
                m+=1;
            }
            else if (arr1[m]==2)
            {
                if(arr1[m]!=arr1[h])
                {
                    temp=arr1[m];
                    arr1[m]=arr1[h];
                    arr1[h]=temp;
                }
                h-=1;
            }
            else 
            {
                m+=1;
            }
        }
        return arr1;
    }
    public static void main(String[] args)
    {
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int arr1[]=new int[n];
        for(int i=0;i<n;i++)
        {
            arr1[i]=sc.nextInt();
        }
        Detch_Flag f=new Detch_Flag();
        arr1=f.flag(arr1);
        for(int i=0;i<n;i++)
        {
            System.out.print(arr1[i]+" ");
        }
    }
}