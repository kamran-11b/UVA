#include<bits/stdc++.h>
using namespace std;

#ifndef SYMBOL
#define  ll    long long
#define  mx    100005
#endif


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll x,m;
        ll l=0,h=1000000000;
        scanf("%lld",&m);
        while(l<=h)
        {
            ll mid=(l+h)/2;
            ll sum=(mid*(mid+1))/2;
            if(sum<=m)
            {
                x=mid;
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        printf("%lld\n",x);
    }
    return 0;
}
