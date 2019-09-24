#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    while(cin>>n)
    {
        ll m,r;
        cin>>m>>r;
        if(n==0 && m==0 && r==0)return 0;
        ll sm=0;
        vector<ll>v,v1;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            v1.push_back(x);
        }
        sort(v.begin(),v.end());
        sort(v1.rbegin(),v1.rend());
        for(int i=0; i<n; i++)
        {
            ll sum=(v[i]+v1[i])-m;
            if(sum>0)
            {
                sm+=(sum*r);
            }
        }
        cout<<sm<<endl;
    }
}
