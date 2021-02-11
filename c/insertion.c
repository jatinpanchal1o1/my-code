#include<stdio.h>

void main()
{
  int n, i, j, pos, value, k;
  printf("Enter the number of element: ");
  scanf("%i", &n);
  int a[n];

  for(i=0; i<n; i++)
  {
    scanf("%i", &a[i]);
  }
  printf("Enter the position and value to insert:\n ");
  scanf("%i%i", &pos,&value);

  for(j=n; j>=pos; j--)
  {
    a[j] = a[j-1];
  }
  pos = a[j];
  a[pos-1] = value;

  for(k=0; k<n; k++)
  {
    printf("%i\n", a[k]);
  }
}