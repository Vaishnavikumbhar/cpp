#include <iostream>
//#include <conio>
class factorial
{
    int n,fact;
public:
    factorial()
    {
        n=0;fact=1;
    }
    int operator*(int i);
};
int i;
int factorial::operator*(int n)
{
    for(i=1;i<=n;i++)

        fact=fact*i;
        return fact;

}
int main()
{
    factorial f;
    int n,fact;
    std::cout<<"enter the number\n";
    std::cin>>n;
    fact=f*n;
    std::cout<<"\n"<<fact;
    return 0;
}
