#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    while(cin>>n)
    {
        ll ar[n+2];
        for(int i=0; i<n; i++)
            cin>>ar[i];

        ll m;
        cin>>m;
        sort(ar,ar+n);
        ll k=1000000,a,b;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ar[i]+ar[j]==m)
                {
                    if(abs(ar[j]-ar[i])<=k){
                        k=abs(ar[j]-ar[i]);
                        a=ar[i];
                        b=ar[j];
                    }
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<min(a,b)<<" and "<<max(a,b)<<"."<<endl<<endl;
    }
}

