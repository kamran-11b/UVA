#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long

int main()
{
    ios_base::sync_with_stdio();
    int t,c=1;
    while(cin>>t)
    {
        if(t==0)
        {
            break;
        }
        int ar[t+2];
        for(int i=1; i<=t; i++)
        {
            cin>>ar[i];
        }
        int m=0,n=0;
        for(int i=1; i<=t; i++)
        {
            if(ar[i]>0)
            {
                m++;
            }
            else
            {
                n++;
            }
        }
        cout<<"Case "<<c++<<": "<<m-n<<endl;
    }
}
