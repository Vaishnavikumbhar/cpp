#include <iostream>
using namespace std;
string reversevowels(string s)
{

    int start = 0;
    int end = s.size()-1;
    char vow[256] = {0};
    vow['a']=1;
    vow['e']=1;
    vow['i']=1;
    vow['o']=1;
    vow['u']=1;
    vow['A']=1;
    vow['E']=1;
    vow['I']=1;
    vow['O']=1;
    vow['U']=1;
    while(start<end)
    {
        while(start<end&&vow[s[start]]==0){
            start++;
        }
        while(start<end&&vow[s[end]]==0){
            end--;
        }
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;


}
int main()
{
    string s;
    cin>>s;
    cout<<reversevowels(s);
    return 0;
}
