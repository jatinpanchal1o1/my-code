#include<stdio.h>

void main()
{
    int n, i, j, k;
    printf("Enter the value: ");
    scanf("%i", &n);

    for(i=0; i<=n; i++)
    {
        for(k=n; k>i; k--)         // for gaping 
        {
            printf(" ");
        }
        
        for(j=0; j<=i; j++)       // for printing * in loop
        {
            printf("*");
        }
                
            printf("\n");         // for next line
   
        }
}