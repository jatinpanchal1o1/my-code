#include<stdio.h>

int *fun()

{

   int y= 15;

   return &y;

}

int main()

{

    int *p = fun();

    fflush(stdin);

printf("%d", *p);

return 0;

}