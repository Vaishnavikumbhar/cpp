//write the cpp program to implement the permutation in cpp
#include <iostream>
#include <string.h>
using namespace std;
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void permutations(char *a,int l,int r)
{
    if(l==r)
        cout<<a<<endl;
    else{
        for(int i=l;i<=r;i++)
        {
            swap((a+1),(a+i));
            permutations(a,l+1,r);
            swap((a+1),(a+i));
        }
    }
}
int main()
{
    char a[]="123";
    permutations(a,0,strlen(a)-1);
    return 0;
}
