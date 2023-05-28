#include <iostream>
#include <cstring>
using namespace std;
class User
{
    int age;
    int income;
    char city[];
    int vehicle;
public:
   void getage()
    {
        cout<<"Enter age of user";
        cin>>age;
        try
        {
            if(age<18||age>55)
                throw age;
        }
        catch(int)
        {
            cout<<"Invalid age entered";
        }
    }
    void income()
    {
        cout<<"enter your income";
        cin>>income;
        try
        {
            if(income<50000||income>100000)
                throw income;
        }
        catch(int)
        {
            cout<<"Invalid income entered";
        }
    }

        void city()
        {
            cout<<"enter your city(in capital)";
            cin>>city;
            try
            {
                if(!strcmp(city,"pune"))||(!strcmp(city,mumbai))||(!strcmp(city,"bangalore"))||(!strcmp(city,"chennai"))
                {

                }
                else
                    throw(city);

            }
            catch(char city[])
            {
                cout<<"invalid city";
            }
        }
        void vehicle()
        {
            cout<<"Enter your vehicle name";
            cin>>vehicle;
            try
            {
                if(vehicle==1)
                    throw vehicle;
            }
            catch(int)
            {
                cout<<"invalid vehicle";
            }
        }

    };


int main()
{
    User u;
    cout<<"--------------------------User eception-----------------";
    u.age();
    u.income();
    u.city();
    u.vehicle();
    return 0;
}
