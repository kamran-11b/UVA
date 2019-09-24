#include<bits/stdc++.h>
using namespace std;

#define  ll    long long
#define  mx    10000005

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
vector<ll>v;

void div(ll n)
{
    for (ll i=0; p[i]*p[i] <=n; i++)
    {
        if (n% p[i]== 0)
        {
            while (n% p[i]== 0)
            {
                v.push_back(p[i]);
                n/= p[i];
            }
        }
    }

    if (n>1)
        v.push_back(n);
}

int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    sieve();
    ll n;
    while(cin>>n,n)
    {
        v.clear();
        cout<<n<<" = ";
        if(n<0)
        {
            n=abs(n);
            cout<<"-1 x ";
        }
        if(n==1){cout<<endl;continue;}
        div(n);
        cout<<v[0];
        for(ll i=1; i<v.size(); i++)
            cout<<" x "<<v[i];
        cout<<endl;
    }
}
