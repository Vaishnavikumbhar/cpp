/*If user entered invalid value in the program
if factorial program entered minus value in cpp built in error provides
    in that try ,throw ,catch
    try: block there is exception is there then throw keyword
    syntax:
try{
}
catch(type1 arg){
}
catch(type2 arg){
}
....
catch(type Narg){
}*/

#include <iostream>
using namespace std;
int main()
{

    cout<<"Welcome:"<<endl;
    int i=4;

    try
        {
            if(i==1)
                throw 1;
            if(i==2)
                throw 2;
            if(i==3)
                throw 3;

                cout<<endl<<"in try";
        }
        /*catch(double e){
        cout<<endl<<"exception no:"<<e;
        }*/
        catch(int e)
        {

            cout<<endl<<"endline"<<e;
        }
        cout<<"last line";

}



















