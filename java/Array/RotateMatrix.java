import java.util.*;
class RotateMatrix
{
    static int[][] Rotate(int[][] ma)
    {
        int n=ma.length;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int temp=ma[i][j];
                ma[i][j]=ma[j][i];
                ma[j][i]=temp;
            }
        }
        return ma;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[][] ma=new int[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            ma[i][j]=sc.nextInt();
        }
        ma=Rotate(ma);
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        System.out.print(ma[i][j]+" ");
        System.out.println();
        }
    }
}