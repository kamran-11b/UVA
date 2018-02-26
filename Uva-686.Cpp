#include <bits/stdc++.h>
using namespace std;

#define mid(s,e)        (s+(e-s)/2)
#define rff(a)          freopen((a), "r", stdin);
#define wtf(a)          freopen((a), "w", stdout);
#define ios             ios_base::sync_with_stdio(0);
#define YES             cout << "YES" << endl
#define NO              cout << "NO" << endl
#define sin(s)	        getline(cin, s)
#define ll              long long
#define ull             unsigned long long
#define dd              double


typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<ll, ll> pll;
typedef set<int> si;
typedef map<int,int> mii;
typedef map<long,long> mll;
typedef map<string,int> msi;
#define mx 40000
bool ar[mx];
vector<ll>vl;

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
            vl.push_back(i);
        }
    }
}


int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    int a,t=1;
    sieve();
    ll n;
    while(cin>>n){
            if(n==0){
                break;
            }
    int c=0;
    for(ll i=0; vl[i]<=n-vl[i]; i++)
    {
        if(ar[n-vl[i]])
            c++;
    }
    cout<<c<<endl;
    }
}
