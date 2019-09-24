#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,t,L,W,H;
    cin>>t;
    while(t--)
    {
        cin>>L>>W>>H;
        if(L<=20 && W<=20 && H<=20)
        {
            cout<<"Case "<<i++<<": good"<<endl;
        }
        else
        {
            cout<<"Case "<<i++<<": bad"<<endl;
        }
    }
    return 0;
}
