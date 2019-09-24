#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        double sum=0,b=0,c=0;

        for(int i=0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                sum+=(b*c);
                b=1;
                if(s[i]=='C')c=12.01;
                if(s[i]=='O')c=16.00;
                if(s[i]=='H')c=1.008;
                if(s[i]=='N')c=14.01;
            }
            if(isdigit(s[i]))
            {
                if(isdigit(s[i-1]))
                    b=b*10+(s[i]-'0');
                else
                    b=(s[i]-'0');
            }
        }
        sum+=(b*c);

        cout<<fixed<<setprecision(3)<<sum<<endl;

    }
    return 0;
}
/*
4
C
C6H5OH
NH2CH2COOH
C12H22O11
*/
