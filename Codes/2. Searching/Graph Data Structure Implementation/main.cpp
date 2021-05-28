#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template <typename T>

class Graph{

    map <T,list<T>> adjList;

    public:
    Graph() {
    }

    void addEdge(T u,T v,bool bidirectional=true) {
        adjList[u].push_back(v);
        if(bidirectional){
            adjList[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto keys: adjList) {
            cout<<keys.first<<"->>";

            for(auto elements: keys.second) {
                cout<<elements<<",";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Graph<string> g;
    g.addEdge("bkt","ktm");
    g.addEdge("patan","ktm");
    g.addEdge("patan","bkt");
    g.printAdjList();
    return 0;
}
