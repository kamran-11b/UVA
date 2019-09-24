#include<iostream>
#include<algorithm>
#include<bits/c++io.h>
#include<math.h>

using namespace std;

int main ()
{
    int n,a,b,j=1;
    cin>>n;
    while(n--)
    {
        int sum=0;
        cin>>a>>b;
        for(int i=a; i<=b; i++)
        {
            if(i%2==1)
            {
                sum=sum+i;
            }
        }
        cout<<"Case "<<j++<<": "<<sum<<endl;
    }
    return 0;
}
