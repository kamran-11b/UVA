#include <bits/stdc++.h>
using namespace std;

/******** Md-Kamran-Ahmad **********/

#define mid(s,e)        (s+(e-s)/2)
#define rff(a)          freopen((a), "r", stdin);
#define wtf(a)          freopen((a), "w", stdout);
#define ios             ios_base::sync_with_stdio(0);
#define YES             cout << "YES" << endl
#define NO              cout << "NO" << endl
#define get(s)	        getline(cin, s)
#define ll              long long
#define ull             unsigned long long
#define dd              double
#define min3(a,b,c)     min(min(a,b),c)
#define min4(a,b,c,d)   min(min(a,b),min(c,d))


typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<ll, ll> pll;
typedef set<int> si;
typedef map<int,int> mii;
typedef map<long,long> mll;
typedef map<string,int> msi;

const double PI=acos(-1.0);

int main()
{
    int n,a,c,d,b;
    cin>>n;
    while(n--)
    {
        map<int,int>mp;
        map<int,int> :: iterator it;
        cin>>a>>c;
        for(int i=0; i<a; i++)
        {
            cin>>b;
            mp[b]=mp[b]+1;
            //cout<<mp[b]<<endl;
        }
        for(int i=0; i<c; i++)
        {
            cin>>d;
            mp[d]=mp[d]-1;
            //cout<<mp[d]<<endl;
        }

        int mm=0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            // cout<<it->first<<" "<<it->second<<endl;
            mm+=abs(it->second);
        }
        cout<<mm<<endl;

    }
    return 0;
}
