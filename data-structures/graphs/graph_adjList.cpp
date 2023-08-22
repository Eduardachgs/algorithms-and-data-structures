#include <iostream>
#include <list>
#include <vector>
#include <queue>

class Graph {
    private:
        bool *mark;
        std::vector<int> *adjList;
        int numVertices;

    public:
        Graph(int numVertices) {
            this->numVertices = numVertices;
            mark = new bool[numVertices];
            std::vector<int> adjList(numVertices);
        }

        ~Graph() {
            delete[] mark;
            delete[] adjList;
        }

        void addEdge(int i, int j) {
            adjList[i].push_back(j);
            adjList[j].push_back(i);
        }

};