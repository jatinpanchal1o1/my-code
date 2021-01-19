import java.util.*;

class test
{
    public static void main(String args[])
    {
        int n, i, j, k, l;
        System.out.print("Enter the value: ");
        Scanner s = new Scanner(System.in);
        n = s.nextInt();

        for(i=0; i<n; i++)
        {
            for(j=n-1; j>i; j--)
            {
            System.out.print(" ");
            }
            
            for(k=0; k<=i; k++)
            {
            System.out.print("#");
            }

            System.out.print(" ");

            for(l=0; l<=i; l++)
            {
            System.out.print("#");
            }

            System.out.println("");

        }
    }
}