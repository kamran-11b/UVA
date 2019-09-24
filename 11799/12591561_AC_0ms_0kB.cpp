#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long

int main()
{
    ios_base::sync_with_stdio();
    int t,c=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+2];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        cout<<"Case "<<c++<<": "<<ar[n-1]<<endl;
    }
}

