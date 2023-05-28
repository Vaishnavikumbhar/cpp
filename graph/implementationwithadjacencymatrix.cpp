//write the c++ program to implement the graph with help of adjecency matrix
#include <iostream>
#include <vector>
using namespace std;
class Graph
{
private:
    bool** adjMatrix;
    int numVertices;
public:
    int i,j;
    Graph(int numVertices)
    {
        this->numVertices=numVertices;
        adjMatrix=new bool *[numVertices];
        for(int i=0;i<numVertices;i++){
            adjMatrix[i]=new bool[numVertices];
            for(int j=0;j<numVertices;j++)
                adjMatrix[i][j]=false;
        }
    }
    //adding the edges in the graph
    void addedge(int i,int j)
    {
        adjMatrix[i][j]=true;
        adjMatrix[j][i]=true;
    }
    //removing the edges from the graph
    void removeedge(int i,int j)
    {
        adjMatrix[i][j]=false;
        adjMatrix[j][i]=false;
    }
    //print the graph the edges in the matrix
    void print()
    {
        for(int i=0;i<numVertices;i++)
            cout<<i<<":";
        for(int j=0;j<numVertices;j++)

            cout<<adjMatrix[i][j]<<"";
            cout<<"\n";

    }
};
int main()
{
    Graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(2,0);
    g.addedge(2,3);
    g.print();
    return 0;
}
