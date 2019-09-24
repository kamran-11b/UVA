#include<iostream>
#include<algorithm>
#include<bits/c++io.h>
#include<math.h>

using namespace std;

int main ()
{
    int a,b;
    while(cin>>a>>b && a!=0 && b!=0)

    {
         int c=0;
        for(int i=a; i<=b; i++)
        {
            int r=sqrt(i);
            int s=pow(r,2);

            if(s==i)
            {
                c++;
            }
        }

        cout<<c<<endl;
    }
    return 0;
}
