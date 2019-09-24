#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bigmod(ll a,ll b,ll mod)
{
    if(b==0)return 1;
    if(b%2==0)
    {
        ll hh=bigmod(a,b/2,mod);
        return (hh*hh)%mod;
    }
    else
    {
        return (a*bigmod(a,b-1,mod))%mod;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,b,c;
    while(cin>>a>>b>>c)
    {
        ll m=bigmod(a,b,c);
        cout<<m<<endl;
    }
}


