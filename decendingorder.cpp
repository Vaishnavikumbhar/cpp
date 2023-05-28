#include <iostream>
using namespace std;
int main()
{
    int arrone[100],num,i,j,temp;
    cout<<"enter the elements\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arrone[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<arrone[i];
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arrone[i]<arrone[j])
            {
                temp=arrone[i];
                arrone[i]=arrone[j];
                arrone[j]=temp;
            }
        }
    }
    cout<<"sorted array \n";
    for(i=0;i<num;i++)
    {
        cout<<"\n"<<arrone[i];
    }
    return 0;
}
