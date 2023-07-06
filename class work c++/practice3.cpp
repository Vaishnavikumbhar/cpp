#include <iostream>
#include <stack>
using namespace std;
int fun(int num)
{
  stack<int>s;
   int b = 0;
  for(int i=9;i>=2;i--)
  {
      while(num%i==0)
      {
          s.push(i);
          num = num/i;
      }
  }
  if(num!=1)
  {
      return -1;
  }
  else{

    while(s.empty())
    {
        int x = s.top();
        s.pop();
        b = b*10 + x;
    }
  }
  return b;
}
int main()
{
    int num;
    cin>>num;
    cout<<fun(num);
    return 0;
}
