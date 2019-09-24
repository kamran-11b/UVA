#include <bits/stdc++.h>
using namespace std;
#define  ll      long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll sum=0;
        int c=0,f=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='O')
            {
                c++;
                if(i==s.size()-1)
                {
                    ll m=(c*(c+1))/2;
                    sum+=m;
                }
            }
            else
            {
                ll m=(c*(c+1))/2;
                sum+=m;
                c=0;
            }
        }
        cout<<sum<<endl;
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
