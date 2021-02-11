#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the number of element: ";
 cin>>n;
 int a[n], i;
for(i=0; i<n; i++)
{
    cin>>a[i];
}
cout<<"Enter the position: ";
int pos;
cin>>pos;
cout<<"Enter the element to insert: ";
int element;
cin>>element;


for (int i=n; i >=pos; i--)
{
a[i] = a[i - 1];
}

 a[pos-1]=element;

for (int j = 0; j<=n; ++j)
{
cout<< a[j]<<"\n";
}

   return 0;
}