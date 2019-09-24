#include<bits/stdc++.h>
using namespace std;

#define   ll long long


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.length()==5)
        {
            cout <<3<<endl;
        }
        else
        {
            if((s[0]=='o'&& s[1]=='n')|| (s[0]=='o'&& s[1]=='e')|| (s[1]=='n'&& s[2]=='e')|| (s[0]=='o'&& s[2]=='e')||(s[0]=='o'&& s[2]=='n'))
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
}
