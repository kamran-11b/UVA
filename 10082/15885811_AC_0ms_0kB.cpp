#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        string s1=" `1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<s1.size(); j++)
            {
                if(s[i]==s1[j] && s[i]!=' ')
                {
                    s[i]=s1[j-1];
                    break;
                }
            }
        }
         for(int i=0; i<s.size(); i++)
        {
            cout<<s[i];
        }
       cout<<endl;
    }
    return 0;
}
