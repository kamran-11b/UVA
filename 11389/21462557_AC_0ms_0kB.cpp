#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m,r;
    while(scanf("%lld %lld %lld",&n,&m,&r),n|m|r)
    {

        ll sm=0;
        vector<ll>v,v1;
        ll ar[n+2],br[n+2];
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            ar[i]=x;
        }
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            br[i]=x;
        }
        sort(ar,ar+n);
        sort(br,br+n,greater<ll>());
        for(int i=0; i<n; i++)
        {
            ll sum=(ar[i]+br[i]);
            if(sum>m)
            {
                sm+=((sum-m)*r);
            }
        }
        cout<<sm<<endl;
    }
}

