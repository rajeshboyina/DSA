import java.util.*;
class MergeList
{
    static void Merge(int[] arr,int s,int m,int e)
    {
        int l,r,c,n1,n2;
        n1=m-s+1;
        n2=e-m;
        int[] left=new int[n1];
        int[] right=new int[n2];
        System.arraycopy(arr, s, left, 0, n1);
        System.arraycopy(arr,m+1,right,0,n2);
        c=s;
        l=0;
        r=0;
        while(l<n1 && r<n2)
        {
            if(left[l]<right[r])
            arr[c++]=left[l++];
            else
            arr[c++]=right[r++];
        }
        while(l<n1)
        arr[c++]=left[l++];
        while(r<n2)
        arr[c++]=right[r++];
    }
     static void MergeSort(int[] arr,int s,int e)
     {
        int m;
        if(s<e)
        {
            m=(s+e)/2;
            MergeSort(arr,s,m);
            MergeSort(arr,m+1,e);
            Merge(arr,s,m,e);

        }
        //return arr;
     }
    public static int[] merge(int[] arr1,int[] arr2)
    {
        int n,m,i,h;
        n=arr1.length;
        m=arr2.length;
        int [] res=new int[n+m];
        i=n-1;
        h=0;
        while(i>=0 && h<m)
        {
            if(arr1[i]>arr2[h])
            {
                int temp=arr1[i];
                arr1[i]=arr2[h];
                arr2[h]=temp;
            }
            i--;
            h++;
        }
        //Arrays.sort(arr1);
        //Arrays.sort(arr2);
        MergeSort(arr1,0,arr1.length-1);
        MergeSort(arr2,0,arr2.length-1);
        int k=0;
        for(i=0;i<n;i++)
        res[k++]=arr1[i];
        for(i=0;i<m;i++)
        res[k++]=arr2[i];
        return res;
    }
    public static void main(String[] args) {
        int n,m,i;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int[] arr1=new int[n];
        for(i=0;i<n;i++)
        {
            arr1[i]=sc.nextInt();
        }
        m=sc.nextInt();
        int[] arr2=new int[m];;
        for(i=0;i<m;i++)
        {
            arr2[i]=sc.nextInt();
        }
        int[] res=merge(arr1,arr2);
        for(i=0;i<res.length;i++)
        {
            System.out.print(res[i]+" ");
        }
    }

}