import java.util.*;
class MatrixZero
{
    static int[][] matrix(int[][] ma)
    {
        int r,cl;
        r=ma.length;
        cl=ma[0].length;
        int[] row=new int[r];
        int[] col=new int[cl];
        // Arrays.fill(row,1);
        // Arrays.fill(col,1);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<cl;j++)
            {
                if(ma[i][j]==0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        //making 0 row 
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<cl;j++)
            {
                if(row[i]==1 || col[j]==1)
                {
                    ma[i][j]=0;
                }
            }
        }
        return ma;
    }
    public static void main(String[] args) {
        int r,c;
        Scanner sc=new Scanner(System.in);
        r=sc.nextInt();
        c=sc.nextInt();
        int[][] ma=new int[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ma[i][j]=sc.nextInt();
            }
        }
        ma=matrix(ma);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                System.out.print(ma[i][j]+ " ");
            }
            System.out.println();
        }
    }
}