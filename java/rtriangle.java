import java.util.*;

class rtriangle
{
    public static void main(String args[])
    { 
     int n, i, j, k;    
     System.out.print("Enter the value: ");
     Scanner s = new Scanner(System.in);
     n = s.nextInt();

     for(i=0; i<n; i++)
     {
         for(j=0; j<=i; j++)
         {
             System.out.print("*");
         }
         System.out.println("");
     }
    }
}