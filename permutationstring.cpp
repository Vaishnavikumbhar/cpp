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
    int i;
    if(l==r)
        cout<<a<<endl;
    else{
        for(i=l;i<=r;i++)
        {
            swap((a+1),(a+i));
            permutations(a,l+1,r);
            swap((a+1),(a+i));
        }
    }
}
int main()
{
    int i;
    char a[]="abc";
    permutations(a,0,strlen(a)-1);
    swap((a+1),(a+i));
    return 0;
}
