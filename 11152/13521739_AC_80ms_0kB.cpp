#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long
#define mx              1000000
#define mod             1000000007
#define pi              2*acos(0.0)
int main()
{
    double a,b,c;
    while(cin>>a>>b>>c)
    {

        //semi-perimeter
        double s=(a+b+c)/2;
        //area of triangle->Heron's formula
        double A=sqrt(s*(s-a)*(s-b)*(s-c));

        //radius of outer circle
        double R1=(a*b*c)/4;
        double R = R1/A;
        //Area of outer circle
        double oc=pi*R*R;

        //Radius of inner circle
        double r=sqrt(((s-a)*(s-b)*(s-c)/s));
        //Area of inner circle
        double ic=pi*r*r;

        cout<<fixed<<setprecision(4)<<oc-A<<" "<<A-ic<<" "<<ic<<endl;
    }
}
