#include<stdio.h>

int main(void)
{
    int n, i, j, k;
    printf("Enter the value: ");
    scanf("%i", &n);

    for(i=0; i<n; i++)      // for count to n
    {
        for(j=n; j>i; j--) // for print * with decreasing order
        {
            printf("*");
        }
        printf("\n");
    }

}