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
        if(s=="#")
            break;
        else if(s=="HELLO")
            cout<<"Case "<<c++<<": "<<"ENGLISH"<<endl;
        else if(s=="HOLA")
            cout<<"Case "<<c++<<": "<<"SPANISH"<<endl;
        else if(s=="HALLO")
            cout<<"Case "<<c++<<": "<<"GERMAN"<<endl;
        else if(s=="BONJOUR")
            cout<<"Case "<<c++<<": "<<"FRENCH"<<endl;
        else if(s=="CIAO")
            cout<<"Case "<<c++<<": "<<"ITALIAN"<<endl;
        else if(s=="ZDRAVSTVUJTE")
            cout<<"Case "<<c++<<": "<<"RUSSIAN"<<endl;
        else
            cout<<"Case "<<c++<<": "<<"UNKNOWN"<<endl;
    }
}
