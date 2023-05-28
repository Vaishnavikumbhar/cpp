//WRITE THE CPP PROGRAM TO COUNT THE NUMBER OF A OCCURANCES OF THE GIVEN ARRAY
#include <iostream>
using namespace std;
int main()
{
    int a[100],num,i,j;
   cout<<"Enter the elements \n";
   cin>>num;
   for(i=0;i<num;i++)
   {
       cin>>a[i];
   }
      for(i=0;i<num;i++)
   {
       for(j=i+1;j<num;j++)
       {
       if(a[i]==a[j])
       {
           cout<<"\n"<<a[i];
       }
   }
   }
   cout<<"The length of the size of the repeating elements\n";
   int length=sizeof(i)/sizeof(a[0]);
   cout<<"\n"<<length;
    return 0;
}
