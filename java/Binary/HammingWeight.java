class HammingWeight
{
    static int Hw(int val)
    {
        int c=0;
        while(val!=0)
        {
            c+=(val&1);
            val>>=1;
        }
        return c;
    }
    public static void main(String[] args) {
        int n=14;
        System.out.println(Hw(n));
    }
}