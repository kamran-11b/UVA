#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    string s,s1;
    while(cin>>s)
    {
        cin>>s1;
        int j=0;
        for (int i=0; j<s.size()&&i<s1.size(); i++)
        {
            if (s[j]==s1[i])
            {
                j++;
            }
        }
        if(j==s.size())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;

}
