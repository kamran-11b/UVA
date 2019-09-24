#include <bits/stdc++.h>
using namespace std;
#define  ll      long long


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[11];
        memset(ar,0,sizeof ar);
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            int k=i;
            while(k)
            {
                ar[k%10]++;
                k/=10;
            }
        }
        for(int i=0; i<10; i++)
        {
            if(i==9)
                cout<<ar[i]<<endl;
            else
                cout<<ar[i]<<" ";
        }
    }
    return 0;
}
/*
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX
*/
