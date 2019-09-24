#include<iostream>
#include<algorithm>
#include<bits/c++io.h>

using namespace std;

int a[2000005];
int main ()
{
    int n,i;

    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        for( i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            cout<<a[i];
            if(i<n-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
