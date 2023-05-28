//write the c++ program to implement the graph data structure using adjecency list
#include <iostream>
using namespace std;
    struct AdjListNode
    {
        int dest;
        struct AdjListNode *next;
    };
    struct AdjList
    {
        struct AdjListNode *head;
    };
    class Graph
    {
    private:
        int v;
        struct AdjList *array;

    public:
        Graph(int v)
        {
            this->v=v;
            array=new AdjList[v];
            for(int i=0;i<v;++i)
                array[i].head=NULL;
        }
    };
int main()
{

    return 0;
}
