#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
class publication
{
protected:
    char title[50];
    float price;
public:
    void get_data()
    {
        cout<<"enter the title:";
        cin>>title;
        cout<<"enter the price\n";
        cin>>price;
    }
    void display()
    {
        cout<<"title"<<title<<"price"<<price;
    }
};
class book:public publication
{
    int page;
public:
    void get_data()
    {
       cout<<"enter the page\n";
       cin>>page;
       void get_data1();
    }
    void display()
    {

        cout<<"page"<<page;
    void display1();
    }

};
class tape:public publication
{
    float minute;
public:
    void get_data()
    {
        cout<<"enter the minute\n";
        cin>>minute;
    }
    void display()
    {
        cout<<"minute"<<minute;
    }
};
int main()
{

    book b1;
    b1.get_data();
    b1.display();


}
