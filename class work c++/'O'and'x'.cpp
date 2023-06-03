#include <iostream>
using namespace std;
int main()
{
    char s[5][4];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>s[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((i!=1&&i!=3)&&(j!=1&&j!=3))
            {
                    if(s[i][j]== 'o')
                    s[i][j]= 'x';

            }

        }
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
