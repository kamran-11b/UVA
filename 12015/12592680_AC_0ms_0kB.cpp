#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long

bool sor1(const pair<string,int> &a,const pair<string,int> &b)
{
    return (a.second > b.second);
}


int main()
{
    ios_base::sync_with_stdio();
    int t,c=1;
    cin>>t;
    while(t--)
    {
        string s;
        int a;
        vector<pair<string,int> > v;
        for(int i=0; i<10; i++)
        {
            cin>>s;
            cin>>a;
            v.push_back(make_pair(s,a));
        }
        cout<<"Case #"<<c++<<":"<<endl;
        sort(v.begin(),v.end(),sor1);
        for(int i=0; i<10; i++)
        {
            if(v[i].second==v[i+1].second)
            {
                cout<<v[i].first<<endl;
            }
            else
            {
                cout<<v[i].first<<endl;
                break;
            }
        }
    }
}
