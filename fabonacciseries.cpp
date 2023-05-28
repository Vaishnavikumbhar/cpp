#include <iostream>
using namespace std;
int series(int n)
{
    cout<<n;
    if(n==1||n==0){
        return n;
    }
    else{
        return series(n-1)+series(n-2);
    }

}
int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<series(num);
    return 0;
}
