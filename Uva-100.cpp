
#include <iostream>
using namespace std;

int main ()
{
    unsigned int i,j;
    while(cin >> i >> j)
    {
        cout <<i<<" "<<j<<" ";
        if(i>j)
        {
            swap(i,j);
        }
        int a=1;
        while(i<=j)
        {
            unsigned int n=i;
            int c=1;
            while(n!=1)
            {
                if(n%2==1)
                {
                    n=3*n+1;
                }
                else
                {
                    n=n/2;
                }
                c++;
            }
            if(c>a)
            {
                a=c;
            }
            i++;
        }
        cout <<a<<endl;
    }
    return 0;
}
