#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    //freopen("A.txt","r",stdin);
    // freopen("B.txt","w",stdout);
    string p="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string m;
    while(getline(cin,m))
    {
        for(int i=0; i<m.size(); i++)
        {
            if(isspace(m[i]))
            {
                cout<<m[i];
            }
            else
            {
                for(int j=0; j<p.size(); j++)
                {
                    if(tolower(m[i])==p[j])
                    {
                        cout<<p[j-2];
                    }
                }
            }
        }
        cout<<endl;
    }
}
