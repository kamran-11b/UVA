#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void soe(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2; p*p<=n; p++)
        if(prime[p]==true)
            for(int i=p*2; i<=n; i+=p) prime[i]=false;
    if(prime[n])
        cout<<"It is a prime word.\n";
    else
        cout<<"It is not a prime word.\n";
}
int main()
{
    string s;
    while(cin>>s)
    {
        int sum=0;
        for(int i=0; i<s.size(); ++i)
        {
            if(s[i]>='a' && s[i]<='z')
                sum+=int(s[i])-96;
            else if(s[i]>='A' && s[i]<='Z')
                sum+=int(s[i])-64+26;
        }
       // cout<<sum<<endl;
        soe(sum);
    }
}
