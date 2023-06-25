#include <iostream>
using namespace std;
void arr(int a[],int n,int s)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>0;j--)
        {
            if(a[i]+a[j]==s)
                cout<<i<<" "<<j<<endl;
        }
    }

}
int main()
{
    int arr1[] = {1,2,3,4,5};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int s = 6;
    arr(arr1,n,s);
    return 0;
}
