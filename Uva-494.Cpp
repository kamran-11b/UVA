#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int w=0;
        for(int i=0; i<s.length(); i++)
        {
            if(isalpha(s[i]) && !isalpha(s[i+1]))
            {
                w++;
            }
        }
        cout <<w<<endl;
    }
    return 0;
}
