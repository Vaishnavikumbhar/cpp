//write the c++ program on function overloading calculate area of rectangle,triangle,square.
#include<iostream>
using namespace std;
int calculate_area(int);
int calculate_area(int,int);
float calculate_area(float,float);
int main()
{
        int side,length,breadth;
        float base_side,height;
        cout<<"Enter required data:"<<endl;
        cin>>side;
        cout<<"Enter length of rectangle:"<<endl;
        cin>>length;
        cout<<"Enter breadth of rectangle:"<<endl;
        cin>>breadth;
        cout<<"Enter base side of triangle:"<<endl;
        cin>>base_side;
        cout<<"Enter height of triangle:"<<endl;
        cin>>height;
        cout<<"Area of square is"<<endl<<calculate_area(side)<<endl;
        cout<<"\nArea of rectangle is "<<endl<<calculate_area(length,breadth)<<endl;
        cout<<"\nArea of triangle is "<<endl<<calculate_area(base_side,height)<<endl;
}
int calculate_area(int side)
{
    return(side*side);
}
int calculate_area(int length,int breadth)
{
    return(length*breadth);
}
float calculate_area(float base_side,float height)
{
   return((base_side*height)/2);
}
