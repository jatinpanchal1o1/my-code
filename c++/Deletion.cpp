#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 int a[12]={3,4,2,5,16};

int pos=2;

int lastindex=4;

a[pos]=a[lastindex];

for (int j = 0; j < 4; ++j)
{
cout<<a[j]<<"\n";
}

   return 0;
}