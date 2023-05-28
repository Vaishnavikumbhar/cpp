#include <iostream>
using namespace std;
void test(int n)
{
    char a='a';
    try
    {
        if(n==0)
        {
            throw a;
        }
        else if(n<0)
        {
            throw n;
        }

        else
        {
            cout<<"\n Square of N="<<n*n;
                    }
    }
                    catch(char x)
                    {
                        cout<<"\n Caught a character:x="<<x;
                    }
                    catch(int x)
                    {
                        cout<<"\n Caught a positive number: x"<<x;
                                            }




}

int main()
{
    cout<<"\n Testing multiple catches\n";
    cout<<"\nx=0";
    test(0);
    cout<<"\n\nx=-1";
    test(-1);
    cout<<"\n\nx=4";
    test(4);
    return 0;
}
