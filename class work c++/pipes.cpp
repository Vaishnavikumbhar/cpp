#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        string T;
        string temp = " ";
        cin>>S>>T;


        for(int i=0;i<S.length();i++)
        {
                if(S[i]==T[i])
                {
                    temp = temp+'G';
                }
                else if((S[i]!=T[i]))
                {
                    temp = temp +'B';
                }

        }
        cout<<temp;
    }
    return 0;
}
