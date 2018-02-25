#include <bits/stdc++.h>
using namespace std;

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

int GCD(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    return GCD(b,a%b);
}

int main()
{
    vector<int> vi;
    while(true)
    {
        int c,N,a;
        vi.clear();
        cin>>N;
        int m=N*(N-1)/2;
        if(N<=1 || N>=50)
        {
            break;
        }
        for(int i=0; i<N; i++)
        {
            cin>>a;
            vi.push_back(a);
        }
        c=0;
        for(int i=0; i<N-1; i++)
        {
            for(int j=i+1; j<N; j++)
            {
                if(GCD(vi[i],vi[j])==1)
                {
                    c++;
                }
            }
        }
        if(c!=0)
        {
            cout<<fixed<<setprecision (6) <<sqrt(6*m*1.0/c)<<endl;
        }
        else
        {
            cout<<"No estimate for this data set."<<endl;
        }
    }
    return 0;
}
