#include <bits/stdc++.h>
#include<map>
using namespace std;

/******** Md-Kamran-Ahmad **********/

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
    string s,s1,s2;
    map<string,string>mp;
    mp.clear();
    int n;
    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++)
    {
        getline(cin,s);
        getline(cin,s1);
        mp[s]=s1;
    }
    int m;
    cin>>m;
    cin.ignore();
    for(int j=0; j<m; j++)
    {
        getline(cin,s2);
        cout<<mp[s2]<<endl;
    }
}


