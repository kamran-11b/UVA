#include <bits/stdc++.h>
using namespace std;

#define    ll     long long
#define    mx     20000002

bool ar[mx];
vector<ll>v;
vector< pair<ll,ll> >p;

void sieve()
{
    memset(ar,1,sizeof(ar));
    for(ll i=4; i<=mx; i+=2)
    {
        ar[i]=0;
    }
    for(ll i=3; i<=sqrt(mx); i+=2)
    {
        if(ar[i])
        {
            for(ll j=i*i; j<=mx; j=j+(2*i))
            {
                ar[j]=0;
            }
        }
    }
    for(ll i=2; i<=mx; i++)
    {
        if(ar[i])
        {
            v.push_back(i);
        }
    }
    for(ll i=0; i<v.size(); i++)
    {
        if(v[i+1]-v[i]==2)
        {
            p.push_back(make_pair(v[i],v[i+1]));
        }
    }
}


int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    sieve();
    ll n;
    while(cin>>n)
    {
        cout<<"("<<p[n-1].first<<", "<<p[n-1].second<<")"<<endl;
    }
}

