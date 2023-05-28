#include <iostream>
#define MAX 100
using namespace std;
class CRC
{
public:
    int nf,ng,temp;
    int nf[MAX];
    char temp[MAX];
};
void input()
{
    cout<<"enter the generator";
    cin>>nf;
    for(int i=0;i<nf;i++)
    {
        cin>>nf[i];
    }
    for(int i=0;i<nf;i++)
    {
        temp[i]=nf[i];
    }
}
void receiver()
{

    int *receiver;

}
int main()
{

    return 0;
}
