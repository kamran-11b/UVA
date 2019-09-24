#include<bits/stdc++.h>
using namespace std;
#define ll long long

int GCD(unsigned int a,unsigned int b)
{
    if(a%b==0)
    {
        return b;
    }
    return GCD(b,a%b);
}

int LCM(unsigned int a,unsigned int b)
{
    return(b/GCD(a,b))*a;


}
int main()
{
    int n,d;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        unsigned int a,b;
        cin>>a>>b;
        int x=GCD(a,b);
        int y=LCM(a,b);
        if(x==a && y==b)
        {
            cout<<x<<" "<<y<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
