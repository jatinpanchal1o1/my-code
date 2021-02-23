#include <stdio.h>
int rev(int);
int main() {
	// your code goes here
  int v;
  scanf("%d", &v);
  int a[50];
  for(int i=0; i<v; i++)
  {
   scanf("%d", &a[i]);
  }
  
   for(int j=0; j<v; j++)
  {
    int jjj = rev(a[j]);
    printf("%d",jjj);
    printf("\n");
  }

  }
int rev(int c)
{
  int num=c;
  
 int rev=0; int rem=0;  
 while (num>1) {  
  rem=num%10;  
  rev = (rev*10) + rem;  
   num=num/10;  
 } 
     return rev;
}