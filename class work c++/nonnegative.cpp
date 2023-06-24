#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(34);
    s.insert(5);
    s.insert(5);
    for(auto it = s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<endl;
    }
   cout<<s.size()<<endl;

   //s.clear();
   //cout<<s.size();

   int key = 20;
   if(s.find(key)==s.end())
   {

       cout<<"key is not found"<<endl;
   }
   else
   {
       auto temp = s.find(key);
       s.erase(temp);
   }

   cout<<"number of element:"<<s.size()<<endl;

   if(s.find(key)!=s.end())
    cout<<"key found";
}
