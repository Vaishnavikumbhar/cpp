//WRITE THE C++ PROGRAM TO FIND OUT THE REPEATING ELEMENTS FROM THE GIVEN ARRAY
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
    return 0;
}
