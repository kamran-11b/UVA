#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll n;
    while(scanf("%lld",&n) && n)
    {
        ll ar[25]= {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,47045881, 64000000,85766121};
        int f=0;
        for(int i=0; i<21; i++)
        {
            if(n==ar[i])
            {
                printf("Special\n");
                f=1;
                break;
            }
        }
        if(f==0)
            printf("Ordinary\n");

    }
}




