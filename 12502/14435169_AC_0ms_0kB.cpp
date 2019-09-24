#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       float a,b,c;
        cin>>a>>b>>c;

        float m=(a+b)/3;

        float k=c/m;
        float p=a-m;

        float ans=k*p;
        cout<<ans<<endl;

    }
}
