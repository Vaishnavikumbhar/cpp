#include <iostream>
using namespace std;
int main()
{
    int a[50],num,i;
    int element=78;
    cout<<"Enter the elements\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<"\n"<<a[i];
    }

        for(i=0;i<num;i++)
        {


        //cout<<"\n CHECKING THE ELEMENTS WHETHER THE NUMBER IS PRESENT IN THE ARRAY LIST OR NOT\n";

        if(a[i]==element)
        {
            cout<<"\n position of the element in the list\n "<<i;
        }
        else
        {
            cout<<"\n";
        }
    }
    return 0;
}
