#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;

    ll ar[n+2];

    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        ll k=0,kk=0;
        for(int i=0; i<n; i++)
        {
            if(ar[i]<x)
            {
                k=ar[i];
            }
            else
            {
                if(ar[i]>x)
                {
                    kk=ar[i];
                    break;
                }
            }
        }
        if(k==0 && kk!=0)
            cout<<'X'<<" "<<kk<<endl;
       else if(k!=0 && kk==0)
            cout<<k<<" "<<'X'<<endl;
        else
            cout<<k<<" "<<kk<<endl;

    }
}
