#include <stdio.h>
int rev();
int main() {
	// your code goes here
  int v;
  scanf("%d", &v);
  int a[v];
  if(v>0&&v<2000)
  {
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
  else
  return 0;
  }
int rev(int c)
{
  int num=c;
  
 int rev=0; int rem=0;  
 while(num>=1)
  {  
  rem=num%10;  
  rev = (rev*10) + rem;
  num /= 10;    
 } 
     return rev;
}