#include<stdio.h>

void main()
{
    int a[50], i, j, k, n;
    printf("Enter your value: ");
    scanf("%i", &n);
    for(i=0; i<n; i++)
    {
     scanf("%i", &a[i]);    
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
    for (int i=0; i<n; i++)
    {
        printf("%i", a[i]);
    }
    printf("\n");

}