#include <bits/stdc++.h>
#include<map>
using namespace std;

/******** Md-Kamran-Ahmad **********/

#define max(x,y)        (x>y)?x:y
#define min(x,y)        (x<y)?x:y
#define mid(s,e)        (s+(e-s)/2)
#define rff(a)          freopen((a), "r", stdin);
#define wtf(a)          freopen((a), "w", stdout);
#define ios             ios_base::sync_with_stdio(0);cin.tie(0)
#define YES             cout << "YES" << endl
#define NO              cout << "NO" << endl
#define sin(s)	        getline(cin, s)
#define ll              long long
#define ull             unsigned long long
#define dd              double
#define min3(a,b,c)     min(min(a,b),c)
#define min4(a,b,c,d)   min(min(a,b),min(c,d))
#define max3(a,b,c)     max(max(a,b),c)
#define max4(a,b,c,d)   max(max(a,b),max(c,d))

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
    long x,a,b,m;
    string s;
    map<int,int>mp;
    //map<int,int>:: iterator it;
    vector<int>v;
    //int len=0;
    //int arr[len];
    while(cin>>x)
    {
        if(mp.count(x)==0)
        {
            mp[x]=1;
            //arr[len++]=x;
            v.push_back(x);
        }
        else
        {
            mp[x]=mp[x]+1;
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "<<mp[v[i]]<<endl;
    }
    return 0;
}

