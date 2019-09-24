#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ar[n+2];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&ar[i]);
        }
        //sort(ar,ar+n);
        int m=50000005;
        for(int j=0; j<n; j++)
        {
            int sum=0;
            for(int i=0; i<n; i++)
            {
                sum+=(abs(ar[j]-ar[i]));
            }
            m=min(m,sum);
        }
        printf("%d\n",m);
    }

}

