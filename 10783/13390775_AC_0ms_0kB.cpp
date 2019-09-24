#include<bits/stdc++.h>

using namespace std;
#define ll              long long

int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        ll sum=0;
        for(int i=a; i<=b; i++)
        {
            if(i%2==1)
                sum+=i;
        }
        cout<<"Case "<<i++<<": "<<sum<<endl;
    }
}
