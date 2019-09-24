#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long
#define mx              1000000
#define mod             1000000007


int main()
{
    ios_base::sync_with_stdio(0);
    int a;
    while(cin>>a)
    {
        if(a==0)
            break;
        ll ar[82];
        ar[0]=1,ar[1]=1;
        for(int i=2; i<81; i++)
        {
            ar[i]=ar[i-2]+ar[i-1];
        }
        cout<<ar[a]<<endl;
    }
}
