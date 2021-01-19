import java.util.*;

class invertedTriangle
{
    public static void main(String args[])
    {
    int n, i, j, k;
    Scanner s = new Scanner(System.in);
    n = s.nextInt();

    for(i=0; i<n; i++)
    {
        for(j=n; j>i; j--)
        {
         System.out.print("*");
        }
        System.out.println("");
        for(k=0; k<=i; k++)
        {
         System.out.print("");  
        }
    }
    }
}