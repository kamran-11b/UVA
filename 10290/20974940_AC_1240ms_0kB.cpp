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
vector<ll>p;

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

    p.push_back(2);
    for(ll i=3; i<=mx; i+=2)
        if( Check(status[i>>5],i&31)==0)
            p.push_back(i);
}

ll div(ll n)
{
    ll c =1;
    for (ll i=0; p[i]*p[i] <= n; i++)
    {
        if (n % p[i]== 0)
        {
            ll cc=0;
            while (n % p[i]== 0)
            {

                if(n%2==1)
                    cc++;
                n /= p[i];
            }
            c*=(cc+1);
        }
    }
    if (n>1)
        c*=2;
    return c;
}

int main()
{
    sieve();
    ll n;
    while(cin>>n)
    {
        ll m=div(n);
        cout<<m<<endl;
    }
}