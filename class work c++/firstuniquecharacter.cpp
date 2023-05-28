#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int cnt = 0;
    int index = -1;
    int f = 0;
    int l = str.length();
    for(int i=0;i<l;i++)
    {
        //cnt = 0;
        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
                cnt++;
        }
          if(cnt == 1)
          {
              int st = str[i];
              index = i;
              f = 1;
              break;
          }
    }
    if(f == 0)
    {
        cout<<"not found";
    }
    else{
        cout<<"it is found";
    }
    //cout<<cnt;
    return 0;
}
