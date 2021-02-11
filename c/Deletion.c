#include<stdio.h>

void main()
{
  int n, i, j, pos, value, k, p;
  printf("Enter the number of element: ");
  scanf("%i", &n);
  int a[n];

  for(i=0; i<n; i++)
  {
    scanf("%i", &a[i]);
  }
  printf("Enter the position: ");
  scanf("%i", &pos);

  for(j=pos-1; j<n; j++)
  {
    a[j] = a[j+1];
  }

  for(k=0; k<n-1; k++)
  {
    printf("%i\n", a[k]);
  }
}