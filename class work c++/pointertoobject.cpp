#include <iostream>
class item
{
    int code;
    float price;
public:
    void getdata(int a,int b)
    {
        code=a;
        price=b;
    }

void show()
{
    std::cout<<"\n"<<code;
   std:: cout<<"\n"<<price;
}
};

int main()
{
item i,*p;
int x;
float y;

p=&i;
std::cout<<"input data member";
std::cin>>x>>y;
p->getdata(x,y);
std::cout<<"\n item information"<<"\n";
p->show();
return 0;
}
