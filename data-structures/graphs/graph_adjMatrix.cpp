#include <iostream>
#include <queue> //para o bfs
// grafo nao dirigido e nao ponderado
class Graph {
    private:
        int** adjMatrix; //ponteiro para ponteiro de bool
        int numVertices;
        bool *mark;
        //toposort
        std::priority_queue<int, std::vector<int>, std::greater<int>> fila;
        int *dp;

    public:
        Graph(int numVertices) {
            this->numVertices = numVertices;
            mark = new bool[numVertices];
            dp = new int[numVertices];
            adjMatrix = new int *[numVertices]; //array de ponteiros para bool

            for (int i=0; i<numVertices; i++) {
                adjMatrix[i] =  new int[numVertices];
                dp[i] = 0;

                for (int j=0; j<numVertices; j++) {
                    adjMatrix[i][j] = 0;
                }
            }
        }

        ~Graph() {
            for (int i=0; i<numVertices; i++) {
                delete[] adjMatrix[i];
            }
            delete[]  adjMatrix;
            delete[] mark;
        }

        void addEdge(int i, int j) {
            adjMatrix[i][j] = 1;
            adjMatrix[j][i] = 1;
        }

        void removeEdge(int i, int j) {
            adjMatrix[i][j] = 0;
            adjMatrix[j][i] = 0;
        }

        int first(int v) {
            for (int i=0; i<numVertices; i++) {
                if (adjMatrix[v][i] != 0 ) {
                    return i;
                }
            }
            return numVertices; //caso nao tenha first
        }

        int next(int v, int w) {
            for (int i=w+1; i<numVertices; i++) {
                if (adjMatrix[v][i] != 0) {
                    return i;
                }
            }
            return numVertices; //caso nao tenha next
        }

        void setEdge(int i, int j) {
            adjMatrix[i][j] = 1;
            adjMatrix[j][i] = 1;
        }

        void delEdge(int i, int j) {
            adjMatrix[i][j] = 0;
            adjMatrix[j][i] = 0;
        }

        void graphTraverse(int v, int op) {
            for (int i=0; i<numVertices; i++) {
                mark[i] = false;
            }
            for (v; v<numVertices; v++) {
                if (mark[v] == false) {
                    if (op) {
                        dfs(v); 
                    }
                    else {
                        bfs(v);
                    }
                }
            }
        }

        void dfs(int v) {
            // previsit
            std::cout << v << " ";
            mark[v] = true;
            int f = first(v);
            while(f < numVertices) {
                if (!mark[f]) {
                    dfs(f);
                }  
                f = next(v, f);
            }
            //posvisit
        }

        void bfs(int start) {
            std::queue<int> myQueue;
            myQueue.push(start);
            mark[start] = true;

            while(myQueue.size() > 0) {
                int v = myQueue.front();
                myQueue.pop();
                //previsit
                std::cout << v << " ";
                int w = first(v);
                while(w < numVertices) {
                    if(!mark[w]) {
                        mark[w] = true;
                        myQueue.push(w);
                    }
                    w = next(v, w);
                }
                //posvisit
            }
        }

        void toposort() {
            for (int i=0; i<numVertices; i++) {
                if (dp[i] == 0) {
                    fila.push(i);
                }
            }

            int cont =0;
            std::vector<int> ordem;

            while (!fila.empty()) {
                int u = fila.top();
                fila.pop();
                ordem.push_back(u);

                for (int t=0; t<numVertices; t++) {
                    if (adjMatrix[u][t] != 0) {
                        dp[t]--;

                        if (dp[t] == 0) {
                            fila.push(t);
                        }
                    }
                }
                cont++;
            }

            if (cont != numVertices) {
                std::cout << "Sandro fails.";
                return;
            }

            for (int i=0; i<ordem.size(); i++) {
                std::cout << ordem[i]+1 << " ";
            }

        }        

        /* bfs shortest path
        void bfs(int start, int end) {
            std::queue<int> fila;
            fila.push(start);
            int aux[numVertices];
            mark[start] = true;

            for (int i=0; i<numVertices; i++) {
                aux[i] = -1;
                mark[i] = false;
            }
            aux[start] = 0;

            while (fila.size() > 0) {
                int v = fila.front();
                fila.pop();
                mark[v] = true; //

                if (v == end) {
                    std::cout << aux[end] << std::endl;
                    return;
                }

                int w = first(v);
                while(w < numVertices) {
                    if(!mark[w]) {
                        mark[w] = true;
                        fila.push(w);
                        aux[w] = aux[v] + 1;
                    }
                    w = next(v, w);
                }
            }
            std::cout << -1 << std::endl;
            return;
        }
        */
};

