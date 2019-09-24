#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    string s;
    int i=0;
    while(cin>>s)
    {
        i++;
        if(s=="*")return 0;
        if(s=="Hajj")cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
        else if(s=="Umrah")cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;

    }
}
