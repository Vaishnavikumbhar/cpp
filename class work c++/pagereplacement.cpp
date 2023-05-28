//write the cpp program to implement the page replacement algorithm
#include <iostream>
using namespace std;
int main()
{
    int no_pages,pages[10],i,j;
    cout<<"enter the numbers of pages"<<endl;
    cin>>no_pages;
    for(i=0;i<no_pages;i++)
    {
        cin>>pages[i];
    }
    for(i=0;i<no_pages;i++)
    {
        cout<<pages[i];
    }
    //implement the page replacement algorithm
    for(i=0;i<no_pages;i++)
    {
        for(j=1;j<no_pages;j++)
        {
        if(pages[i]==pages[j])
        {
            cout<<"page hit"<<endl<<i;
        }
        else
        {
            cout<<"page miss(fault)"<<endl;
        }
    }

    }
    return 0;
}
