#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long

int main()
{
    ios_base::sync_with_stdio();
    int t,c=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+2];
        for(int i=1; i<=n; i++)
        {
            cin>>ar[i];
        }
        if(n==1)
        {
            cout<<"Case "<<c++<<": "<<0<<" "<<0<<endl;
        }
        else
        {
            int m=0,p=0;
            for(int i=1; i<n; i++)
            {
                if(ar[i]<ar[i+1])
                {
                    m++;
                }
                else if(ar[i]>ar[i+1])
                {
                    p++;
                }
            }
            cout<<"Case "<<c++<<": "<<m<<" "<<p<<endl;
        }
    }
}
