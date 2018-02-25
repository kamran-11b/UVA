#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[80];
    while(cin.getline(ch,80))
    {
        int l=strlen(ch);
        for(int i=0; i<l; ++i)
        {
          printf("%c",ch[i]-7);
        }
        cout<<endl;
    }
}
