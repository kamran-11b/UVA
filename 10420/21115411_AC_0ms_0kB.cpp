#include<bits/stdc++.h>
using namespace std;
#define   ll   long long
#define   mx   100005

int main()
{
    int t;
    cin>>t;
    map<string,int>mp;

    for(int i=0; i<t; i++)
    {
        string a;
        cin>>a;
        string s;
        cin.ignore();
        getline(cin,s);
        mp[a]++;
    }
    map<string,int>:: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}
