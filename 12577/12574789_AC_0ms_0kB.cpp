#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long
#define  pi             2*acos(0.0)

map<string,string>mp;
map<int,int>mp1;
vector<int>v;
set<int>sp;

int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio();
    int t,c=1;
    string s;
    while(cin>>s)
    {
        if(s=="*")
            break;
        else if(s=="Hajj")
            cout<<"Case "<<c++<<": "<<"Hajj-e-Akbar"<<endl;
        else
            cout<<"Case "<<c++<<": "<<"Hajj-e-Asghar"<<endl;
    }
}

