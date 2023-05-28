//write the c++ program to separate the 0's and 1's elements from the array
#include <iostream>
using namespace std;
int main()
{
   int a[100],num,i;
   cout<<"Enter the elements \n";
   cin>>num;
   for(i=0;i<num;i++)
   {
       cin>>a[i];
   }
   int control;
   for(i=0;i<num;i++)
   {
       if(a[i]==0)
   control++;
   }
   for(i=0;i<control;i++)
    a[i]=0;
   for(i=control;i<num;i++)
    a[i]=1;
    for(i=0;i<num;i++)
    {
        cout<<a[i];
    }
    return 0;
}
