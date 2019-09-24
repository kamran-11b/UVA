#include<bits/stdc++.h>
using namespace std;

#define  ll    long long
#define  mx    100000005

bool Check(ll N,ll pos)
{
    return (bool)(N & (1<<pos));
}
ll Set(ll N,ll pos)
{
    return N=N | (1<<pos);
}

ll status[(mx/32)+2];
vector<ll>v;

void sieve()
{
    ll sqrtN =(sqrt(mx));
    for(ll i=3; i<=sqrtN; i+=2)
    {
        if(Check(status[i>>5],i&31)==0)
        {
            for(ll j = i*i; j <=mx; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }
    v.push_back(2);
    for(ll i=3; i<=mx; i+=2)
        if( Check(status[i>>5],i&31)==0)
            v.push_back(i);
}


int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    sieve();
    ll n;
    cin>>n;
    while(n--)
    {
        ll l,r;
        cin>>l>>r;
        ll c=0;
        for(ll i=0; i<=sqrt(r); i++)
        {
            ll k=v[i];
            while(1)
            {
                k=k*v[i];
                if(k>=l && k<=r)
                {
                    c++;
                    //cout<<k<<endl;
                }
                else if(k<l)
                    continue;
                else
                    break;
            }
        }
        cout<<c<<endl;
    }
}
