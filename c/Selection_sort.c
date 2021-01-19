#include<stdio.h>

void main()
{
  int n;
  printf("Enter your value: ");
  scanf("%i",&n);
  int a[n];
  for(int i=0; i<n; i++)
  {
  scanf("%i", &a[i]);
  }

  for(int k=0; k<n-1; k++)
  {
    int index = k;
    for(int j=index+1; j<n; j++)
    {
      if(a[j]<a[index])
      {
       index = j;
      }
    }
    int tem = a[index];
           a[index] = a[k];
           a[k] = tem;
  }
  for(int i=0; i<n; i++)
  {
  printf("%i", a[i]);
  }
  printf("\n");
}
