//write the c++ program to demostrate the object the function
#include <iostream>
#include <fstream>
using namespace std;
class student
{
private:
    char name[30];
    int age;
public:
    void getdata()
    {
        cout<<"enter the name of the student\n";
        cin>>name;
        cout<<"enter the age of the student\n";
        cin>>age;
    }
    void display()
    {
        cout<<name<<age;
    }
    };
    int main()
    {
        student s;
        ofstream file;
        file.open("aaa1.txt",ios::out);
        if(!file)
        {
            cout<<"file is not open \n";
        }
        cout<<"file is open\n";
        //write into file
        s.getdata();
        file.write((char*)&s,sizeof(s));
        cout<<"file is open successfully\n";
        file.close();
       // ifstream file;
        file.open("aaa1.txt",ios::in);
        if(!file)
        {
            cout<<"file is not read successfully\n";
            return 0;
        }
     //   file.read((char*)&s,sizeof(s));
       // cout<<"file is read successfully\n";
        s.display();
        file.close();
        return 0;
    }
