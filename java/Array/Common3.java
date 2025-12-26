// class Common3{
//     public static int common(int[] arr1,int[] arr2,int[] arr3,int[] res)
//     {
//         int n1,n2,n3,i,j,k,l;
//         i=0;
//         j=0;
//         k=0;
//         l=0;
//         n1=arr1.length;
//         n2=arr2.length;
//         n3=arr3.length;
//         while(i<n1 && j<n2 && k<n3)
//         {
//             if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
//             {
//                 res[l]=arr1[i];
//                 i+=1;
//                 j+=1;
//                 k+=1;
//                 l+=1;
//                 while(i<n1 && arr1[i]==arr1[i-1])
//                 {
//                     i+=1;
//                 }
//                 while(j<n2 && arr2[j]==arr2[j-1])
//                 {
//                     j+=1;
//                 }
//                 while(k<n3 && arr3[k]==arr3[k-1])
//                 {
//                     k+=1;
//                 }
//             }
//             else if(arr1[i]<arr2[j])
//             {
//                 i+=1;
//             }
//             else if(arr2[j]<arr3[k])
//             {
//                 j+=1;
//             }
//             else
//             {
//                 k+=1;
//             }
//         }
//         return l;
//     }
//     public static void main(String[] args) {
//         int[] arr1={1,3,5,7,9};
//         int[] arr2={2,3,4,5,6};
//         int[] arr3={2,3,5,7};
//         int[] res={0,0,0,0,0};
//         int l=common(arr1,arr2,arr3,res);
//         for(int x=0;x<l;x++)
//         {
//             System.out.println(res[x]+" ");
//         }
//     }
// }
import java.util.*;
class Common3{
    public static ArrayList<Integer> common(int[] arr1,int[] arr2,int[] arr3)
    {
        int n1,n2,n3,i,j,k;
        i=0;
        j=0;
        k=0;
        n1=arr1.length;
        n2=arr2.length;
        n3=arr3.length;
        ArrayList<Integer> res=new ArrayList<Integer>();
        while(i<n1 && j<n2 && k<n3)
        {
            if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
            {
                res.add(arr1[i]);
                i+=1;
                j+=1;
                k+=1;
                while(i<n1 && arr1[i]==arr1[i-1])
                i+=1;
                while(j<n2 && arr2[j]==arr2[j-1])
                j+=1;
                while(k<n3 && arr3[k]==arr3[k-1])
                k+=1;
            }
            else if(arr1[i]<arr2[j])
            i+=1;
            else if(arr2[j]<arr3[k])
            j+=1;
            else
            k+=1;
        }
        return res;
    }
    public static void main(String args[])
    {
        int[] arr1={1,3,5,7,9},arr2={2,3,4,5,6},arr3={2,3,5,7};
        ArrayList<Integer> res= new ArrayList<Integer>();
        res=common(arr1,arr2,arr3);
        for (Object ele : res) {
            System.out.println(ele+" ");
        }

    }
}