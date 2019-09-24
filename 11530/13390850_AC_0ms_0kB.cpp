#include<bits/stdc++.h>
using namespace std;
#define ll              long long

int main()
{

    int t,k=1;
    cin>>t;
    cin.ignore();
    while(t--)
    {

        string s1="adgjmptw";
        string s2="behknqux";
        string s3="cfilorvy";
        string s4="sz";
        string s;
        getline(cin,s);
        int aa=0,bb=0,cc=0,dd=0,gg=0;
        for(int i=0; i<s.size(); i++)
        {
            if(isspace(s[i]))
            {
                gg++;
            }
            for(int j=0; j<s1.size(); j++)
            {
                if(s[i]==s1[j])
                {
                    aa++;
                }
            }
            for(int j=0; j<s2.size(); j++)
            {
                if(s[i]==s2[j])
                {
                    bb+=2;
                }
            }
            for(int j=0; j<s3.size(); j++)
            {
                if(s[i]==s3[j])
                {
                    cc+=3;
                }
            }
            for(int j=0; j<s4.size(); j++)
            {
                if(s[i]==s4[j])
                {
                    dd+=4;
                }
            }
        }
        //cout<<"Case #"<<k++<<": "<<gg<<endl;
        cout<<"Case #"<<k++<<": "<<aa+bb+cc+dd+gg<<endl;
    }
}
