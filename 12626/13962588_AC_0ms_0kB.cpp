#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main ()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;
        int m=0,a=0,r=0,g=0,ii=0,tt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='M')
            {
                m++;
            }
            if(s[i]=='A')
            {
                a++;
            }
            if(s[i]=='R')
            {
                r++;
            }
            if(s[i]=='G')
            {
                g++;
            }
            if(s[i]=='I')
            {
                ii++;
            }
            if(s[i]=='T')
            {
                tt++;
            }
        }
        int Arr[7]= {a/3,m,r/2,g,ii,tt};
        sort(Arr,Arr+6);

        if(a==0 || m==0 || r==0 || ii==0 || g==0 || tt==0)
        {
            cout<<0<<endl;
        }

        else
        {
            cout<<Arr[0]<<endl;
        }


    }

}

