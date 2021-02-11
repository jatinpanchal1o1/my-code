#include <iostream>

using namespace std;

int main()
{
    int n, i, value,rev,rem;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>value;
        int z = value;
        rev=0;
        while(z!=0)
        {
            rem = z%10;
            rev = rev*10 + rem;
            z/=10;
        }
        if(value == rev)
        {
         cout<<"wins"<<endl;
        }
        else
        {
        cout<<"loses"<<endl;
        }
    }

    return 0;
}