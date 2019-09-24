#include<bits/stdc++.h>
using namespace std;
vector<int>v;
bool ar[10005];

bool isprime(int x)
{
    if(x<10005)
    {
        return ar[x];
    }
    for(int i=2; i<sqrt(10005); i++)
    {
        if(x%ar[i]==0)
        {
            return false;
        }
    }
    return true;
}

void seive(int n)
{
    for(int i=4; i<=n; i+=2)
    {
        ar[i]=1;
    }
    for(int i=3; i*i<=n; i+=2)
    {
        if(!ar[i])
        {
            for(int j=i*i; j<=n; j=j+i)
            {
                ar[j]=1;
            }
        }
    }
    //cout<<n<<endl;
    if(isprime(n))
    {
        cout<<"It is not a prime word."<<endl;
    }
    else
    {
        cout<<"It is a prime word."<<endl;
    }
}

int main()
{
    char c[105];
    while(cin>>c)
    {
        int l=strlen(c),s=0;
        for(int i=0; i<l; i++)
        {
            if(c[i]>='a' && c[i]<='z')
            {
                s+=c[i]-'a'+1;
            }
            else
            {
                s+=c[i]-'A'+27;
            }
        }
        seive(s);
    }
}
