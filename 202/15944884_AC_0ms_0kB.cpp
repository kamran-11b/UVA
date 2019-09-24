#include <bits/stdc++.h>
using namespace std;
#define  ll      long long


int main()
{

    int a,b;

    while(cin>>a>>b)
    {
        cout<<a<<"/"<<b<<" = "<<a/b<<".";
        int ar[10000],br[10000];
        memset(br,0,sizeof br);

        a=a%b;
        br[a%b]=1;
        int c=2;

        while(1)
        {
            a*=10;
            ar[c]=a/b;

            if(br[a%b]==0)
                br[a%b]=c;
            else
                break;
            c++;
            a%=b;
        }
        int st=br[a%b];
        int ed=c;
        int cy=ed-st;
        for(int i=2; i<=st; i++)
            cout<<ar[i];
        cout<<"(";

        if(cy<=50)
        {
            for(int i=st+1; i<=ed; i++)
                cout<<ar[i];
            cout<<"";
        }
        else
        {
            for(int i=st+1; i<=st+50; i++)
                cout<<ar[i];
            cout<<"...";
        }
        cout<<")"<<endl;
        cout<<"   "<<cy<<" = number of digits in repeating cycle"<<endl<<endl;
    }
}
