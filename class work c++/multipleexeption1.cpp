#include <iostream>
using namespace std;
void test(int x)throw(char,int)
{
    if(x==0)throw'0';
    else if(x==1)throw x;
    else if(x==-1)  throw 1.0;
    else cout<<"x="<<x;
    cout<<"\nEnd of test()\n";
    }
    int main()
    {
        try{
            cout<<"\n Testing throw restriction\n";
            cout<<"x=0";
            test(0);
            cout<<"x=1";
            test(1);
            cout<<"x=-1";
            test(-1);
            cout<<"2";
            test(2);
        }
            catch(char x)
            {
                cout<<"\n Caught a character:x="<<x;
                            }
                            catch(int x)
                            {
                                cout<<"\n Caught a integer\n"<<x;

                            }
                            catch(float x)
                            {
                                cout<<"\n Caught an integer\n"<<x;
                            }
                            cout<<"\n End of main()\n";
                            return 0;




        }





