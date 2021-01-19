import java.util.Scanner;

class Bubble{
    public static void main(String args[])
    {
        int n, i, j, k, index;
        System.out.print("Enter the value: ");
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
  
        int[] a = new int[n];   
        for(i=0; i<n; i++)
        {
         a[i] = s.nextInt();
        }

        for(j=0; j<n-1; j++)
        {
            for(k=0; k<n-j-1; k++)
            {
                if(a[k]>a[k+1])
                {
                    int tem = a[k];
                    a[k] = a[k+1];
                    a[k+1] = tem;
                }
            } 
        }
        for(i=0; i<n; i++)
        {
            System.out.print(a[i]);
        }
        System.out.println("");
    }
}