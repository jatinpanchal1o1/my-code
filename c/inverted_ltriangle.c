#include<stdio.h>

int main(void)
{
    int n, i, j, k;
    printf("Enter the value: ");
    scanf("%i", &n);

    for(i=0; i<n; i++)      // for count to n
    {
        for(j=n; j>i; j--)  // for print * in decreacing order
        {
            printf("*");
        }
        printf("\n");
        for(k=0; k<=j; k++) // for gap in increasing order
        {
            printf(" ");
        }
    }
    printf("\n");
}