#include <bits/stdc++.h>
using namespace std;

#define    ll     long long
#define    mx     1000002


bool ar[mx];
ll a[mx];

ll dsum(ll n)
{
    ll m=0;
    while(n!=0)
    {
        m+=(n%10);
        n/=10;
    }
    return m;
}

void sieve()
{
    memset(ar,1,sizeof(ar));
    for(int i=4; i<=mx; i+=2)
        ar[i]=0;
    for(int i=3; i<=sqrt(mx); i+=2)
    {
        if(ar[i])
        {
            for(int j=i*i; j<=mx; j=j+(2*i))
            {
                ar[j]=0;
            }
        }
    }
    int c=0;
    for(int i=2; i<=mx; i++)
    {
        if(ar[i])
        {
            if(ar[dsum(i)])
                ++c;
        }
        a[i]=c;
    }
}

int main()
{
    sieve();
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        printf("%d\n",a[r]-a[l-1]);
    }
}
