#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long
#define mx              1000000
#define mod             1000000007

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int sum=(a+b);
        int ab=(a-b);
        if(ab<0 || sum%2==1)
            cout<<"impossible"<<endl;
        else
            cout<<sum/2<<" "<<ab/2<<endl;
    }
}

