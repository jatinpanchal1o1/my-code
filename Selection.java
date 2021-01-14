import java.util.Scanner;

class Selection {
   public static void main(String args[])
   {
    int n;
    System.out.println("Enter the value: ");
    Scanner sc = new Scanner(System.in);
    n = sc.nextInt();
    
    int[] a = new int[n];

    for(int i = 0; i<n; i++)
    {
        a[i] = sc.nextInt();
    }
    for(int j=0; j<n-1; j++)
    {
        int index = j;
        
        for(int k=index+1; k<n; k++)
        {
            
            if(a[k]<a[index])
            {
                index = k;
            }

        }
        int min = a[index];
        a[index] = a[j];
        a[j] = min;
    }
    for(int i=0; i<n; i++) 
    {
        System.out.println(a[i]);
    } 
}

}