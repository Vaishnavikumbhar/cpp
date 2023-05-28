#include <iostream>
using namespace std;
class customer
{
    //personal detail
public:
    string name;
    int mobile_number;
    void fun()
    {
        cout<<"enter the name of the customer\n";
        cin>>name;
        cout<<"enter the mobile number of the costomer\n";
        cin>>mobile_number;
    }
    void display()
    {
        cout<<"INFO OF THE CUSTOMER \n";
        cout<<"name"<<name;
        cout<<"mobile_number"<<mobile_number;
    }
};
class account:public customer
{
    //account detail
public:
    int account_no;
    int branch;
    int name_city;
    void RBI()
    {
        cout<<"enter the account number of the customer\n";
        cin>>account_no;
        cout<<"enter the branch of the bank\n";
        cin>>branch;
        cout<<"enter the name of the city \n";
        cin>>name_city;
    }
    void show()
    {
        cout<<"account_no"<<account_no;
        cout<<"branch"<<branch;
        cout<<"name_city"<<name_city;
    }

};
int main()
         {
             customer s;
             account s1;
             s.fun();
             s.display();
             s1.fun();
             s1.display();
             s1.RBI();
             s1.show();

         }
