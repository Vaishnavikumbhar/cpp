#include <iostream>
using namespace std;
int main()
{
    int arrone[50],arrtwo[50],arrmerge[100];
    int sizeone,sizetwo,i,k;
    cout<<"Enter the elements \n";
    cin>>sizeone;
    for(i=0;i<sizeone;i++)
    {
        cin>>arrone[i];
        arrmerge[i]=arrone[i];
    }
    k=i;
    cout<<"Enter the elements \n";
    cin>>sizetwo;
    for(i=0;i<sizetwo;i++)
    {
        cin>>arrtwo[i];
        arrmerge[k]=arrtwo[i];
        k++;
    }
    cout<<"The new array of merge array\n";
    for(i=0;i<k;i++)
    {
        cout<<arrmerge[i];
    }

    return 0;
}
