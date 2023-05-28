#include <iostream>
using namespace std;
int main()
{
    int v;
    int w;
    cin>>v;
    cin>>w;

    for(int i=1;i<v;i++)
    {
        int sum = 0;
        for(int j=1;j<v;j++)
        {
            sum = (i*2)+(j*4);
            if(sum==w && i>j && (i+j==v))
            {

                cout<<i<<j;
            }
        }
    }
    return 0;
}
