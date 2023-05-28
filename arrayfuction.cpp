//write the c++ program to insert array elements
#include <iostream>
using namespace std;
int main()
{
    int num,i,a[100],position,element;
    cout<<"Enter the elements"<<endl;
    cin>>num;
    cout<<"Enter the position of the array"<<endl;
    cin>>position;
    if(position<1||position!=0)

    cout<<"Enter the elements"<<endl;
    cin>>element;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<num;i++)
    {
        a[i]=element;
        cout<<a[i];

    }


    return 0;
}
