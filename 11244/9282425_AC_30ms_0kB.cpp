#include<iostream>
using namespace std;
int main()
{
    int f,c,stars;
    bool s =true;
    cin>>f>>c;
    while(f!=0)
    {
        stars = 0;
        char m [f][c];
        for(int i=0; i<f; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>m[i][j];
            }
        }
        for(int i=0; i<f; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(m[i][j] == 42)
                {
                    for(int k=0; k<3; k++)
                    {
                        for(int l=0; l<3; l++)
                        {
                            if(((i+k-1)<f) && ((j+l-1)<c))
                            {
                                if(((i+k-1)>-1) && ((j+l-1)>-1))
                                {
                                    if((m[i+k-1][j+l-1] == 42) && !((i+k-1)== i  && (j+l-1)==j))
                                    {
                                        s = false;
                                    }
                                }
                            }

                        }

                    }

                    if(s == true)
                    {
                        stars++;
                    }
                }
                s= true;
            }
        }
        cout<<stars<<endl;
        cin>>f>>c;
    }
    return 0;
}
