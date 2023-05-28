//vector is provide the flexibilty of the class
//we can resize the array it works likes dynamic array
//push_back is used to add the memeber in array
//pop_back is to reduce the number from the array but it is not resize the size of the array
//size is to print original size
//clear
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i;
    vector<int>v1{10,20,30};//blank vector
    vector<char>v2{1,2,3,4};
    for(int i=0;i<4;i++)
    {
    cout<<v1[i]<<endl;
    //cout<<v1[1]<<endl;
    //cout<<v1[2]<<endl;
    }
    cout<<v1.capacity()<<endl;
    v1.push_back(34);
    for(int i=0;i<4;i++){
    cout<<endl<<v1[i]<<endl;
    }
    for(i=0;i<4;i++)
    {
    vector<int>::iterator it=v1.begin();
   // v1.insert(it+1,35);

    v1.insert(it+1,35);
   // for(i=0;i<4;i++)
   // {
    cout<<v1[i];
   }
    cout<<endl<<v1.at(2);
    cout<<endl<<v1.front();
    cout<<endl<<v1.back();
    cout<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<v1.size()<<endl;
    v1.clear();
    cout<<v1.capacity()<<endl;
    //cout<<v1.at(2);

}
