#include <bits/stdc++.h>
using namespace std;

#define rff(a)          freopen((a), "r", stdin);
#define wtf(a)          freopen((a), "w", stdout);
#define ios             ios_base::sync_with_stdio(0);cin.tie(0)
#define YES             cout << "YES" << endl
#define NO              cout << "NO" << endl
#define sin(s)	        getline(cin, s)
#define ll              long long
#define ull             unsigned long long
#define dd              double
#define max(x,y)        (x>y)?x:y
#define min(x,y)        (x<y)?x:y
#define mid(s,e)        (s+(e-s)/2)
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
    string s;
    while(cin>>s)
    {
        int c=0;
        string s1=s;
        reverse(s1.begin(),s1.end());
        int l=s.size();
        for(int i=0; i<l; i++)
        {
            if((s[i]=='A' && s[l-i-1]=='A')||(s[i]=='E' && s[l-i-1]=='3')||(s[i]=='3' &&s[l-i-1]=='E')||(s[i]=='H'
                    && s[l-i-1]=='H')||(s[i]=='I' && s[l-i-1]=='I')||(s[i]=='J' && s[l-i-1]=='L') || (s[i]=='L' && s[l-i-1]=='J')
                    ||(s[i]=='M' && s[l-i-1]=='M')||(s[i]=='O'&& s[l-i-1]=='O')|| (s[i]=='2' && s[l-i-1]=='S')
                    ||(s[i]=='T' && s[l-i-1]=='T')|| (s[i]=='U' && s[l-i-1]=='U')||(s[i]=='V' && s[l-i-1]=='V')||(s[i]=='W' &&
                            s[l-i-1]=='W')||(s[i]=='X' && s[l-i-1]=='X')||(s[i]=='Y' && s[l-i-1]=='Y')||(s[i]=='Z'&& s[l-i-1]=='5')
                    ||(s[i]=='5' && s[l-i-1]=='Z')||(s[i]=='1' && s[l-i-1]=='1')||(s[i]=='S' && s[l-i-1]=='2') ||(s[i]=='8' && s[l-i-1]=='8'))
            {
                c++;
            }
        }
        if(l==c && s==s1)
        {
            cout<<s<<" -- is a mirrored palindrome."<<endl;
        }
       else if(l==c && s!=s1)
        {
            cout<<s<<" -- is a mirrored string."<<endl;
        }
       else if(s==s1 && l!=c)
        {
            cout<<s<<" -- is a regular palindrome."<<endl;
        }
        else if(s!=s1 && l!=c)
        {
            cout<<s<<" -- is not a palindrome."<<endl;
        }
        cout<<endl;
    }
    return 0;
}

