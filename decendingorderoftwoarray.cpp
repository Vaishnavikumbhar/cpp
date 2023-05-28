#include <iostream>
using namespace std;
int main()
{
    int arrone[50],arrtwo[50],arrmerge[100],num,num1,i,k,j,temp;
    int element;
    cout<<"WHICH ELEMENT DO YOU WANT TO INSERT\n";
    cin>>element;
    arrmerge[1]=element;
    cout<<"Enter the elements\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arrone[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<"\n"<<arrone[i];
        arrmerge[i]=arrone[i];
    }
    k=i;
    cout<<"Enter the elements\n";
    cin>>num1;
    for(i=0;i<num1;i++)
    {
        cin>>arrtwo[i];
    }
    for(i=0;i<num1;i++)
    {
        cout<<arrtwo[i];
        arrmerge[k]=arrtwo[i];
        k++;
    }
    cout<<"Merging of a two array \n";
    for(i=0;i<k;i++)
    {
        cout<<arrmerge[i]<<"\n";
        for(j=i+1;j<k;j++)
        {
            if(arrmerge[i]>arrmerge[j])
            {
                temp=arrmerge[i];
                arrmerge[i]=arrmerge[j];
                arrmerge[j]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        cout<<"arrange the elements in a decending order\n";
        cout<<arrmerge[i];
    }



    return 0;
}
