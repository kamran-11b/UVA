#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
   // cin.ignore();
    while(getline(cin,s))
    {
        int k=0,l=0;
        for(int i=0; i<=s.size(); i++)
        {
            if(s[i]==' ' || s[i]=='\0')
            {
                for(int j=i-1; j>=l; j--)
                {
                    cout<<s[j];
                }
                l=i+1;
                if(s.size()==i)
                {
                    cout<<endl;
                }
                else
                {
                    cout<<" ";
                }
            }
        }

    }
}
