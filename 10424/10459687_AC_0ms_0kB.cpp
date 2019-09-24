#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    double s1,s2;
    while(getline(cin,a))
    {
        getline(cin,b);
        int sum=0,v1;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                v1=a[i]-96;
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
                v1=a[i]-64;
            }
            else
            {
                v1=0;
            }
            sum=sum+v1;
        }
        s1=0;
        while(sum!=0)
        {
            int d=sum%10;
            sum=sum/10;
            s1=s1+d;
        }
        if(s1>9)
        {
            sum=s1;
            s1=0;
            while(sum!=0)
            {
                int d=sum%10;
                sum=sum/10;
                s1=s1+d;
            }
        }
        int sum1=0,v2;
        for(int j=0; j<b.size(); j++)
        {
            if(b[j]>='a' && b[j]<='z')
            {
                v2=b[j]-96;
            }
            else if(b[j]>='A' && b[j]<='Z')
            {
                v2=b[j]-64;
            }
            else
            {
                v2=0;
            }
            sum1=sum1+v2;
        }
        s2=0;
        while(sum1!=0)
        {
            int d1=sum1%10;
            sum1=sum1/10;
            s2=s2+d1;
        }
        if(s2>9)
        {
            sum1=s2;
            s2=0;
            while(sum1!=0)
            {
                int d1=sum1%10;
                sum1=sum1/10;
                s2=s2+d1;
            }
        }
        if(s1<s2)
        {
            cout<<fixed<<setprecision(2)<<(s1*100)/s2<<" %"<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(2)<<(s2*100)/s1<<" %"<<endl;
        }

    }
    return 0;
}
