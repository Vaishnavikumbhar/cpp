#include <iostream>
using namespace std;
class oddnumber
{
    int odd;
public:
    oddnumber(){
        odd=1;
    }
    ~oddnumber()
    {

    };
    int operator+(int i)
    {
        odd=odd+i;
        return odd;
    }
};
int main()
{
    oddnumber o1,o2;
    int n,no=1;
    cout<<"how many numbers\n";
    cin>>n;
    cout<<no;
    for(int i=1;i<n;i++)
    {
        no=o1+2;
        cout<<"\t"<<no;
    }
    return 0;
}
