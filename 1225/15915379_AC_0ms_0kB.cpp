#include <bits/stdc++.h>
using namespace std;
#define  ll      long long

string int_to_string(int n)
{
    stringstream s;
    s<<n;
    return s.str();

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s="";
        int n;
        cin>>n;

        for(int i=1; i<=n; i++)
        {
            string p=int_to_string(i);
            s+=p;
        }
        string k="0123456789";
        for(int i=0; i<k.size(); i++)
        {
            if(i==9)
                cout<<count(s.begin(),s.end(),k[i])<<endl;
            else
                cout<<count(s.begin(),s.end(),k[i])<<" ";
        }
    }
    return 0;
}
/*
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX
*/
