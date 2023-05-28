//write the c++ program to implement the implentation of the graph
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;
class edge;
class vertex;
class edge{
public:
  int destinationVertexID;
  int weight;

~edge()
{

}

edge(int destVID,int w)
{
  destinationVertexID=destVID;
  weight=w;
}
void setedgeValues(int destVID,int w)
{
    destinationVertexID=destVID;
    weight=w;
}
void setweight()
{
   return weight;
}
};
