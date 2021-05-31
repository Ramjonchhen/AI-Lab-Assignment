#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template <typename T>

class Graph{
    map <T, vector<T> > adjList;

public:
    void addEdge(T sour,T dest,bool bidirec=true) {
        adjList[sour].push_back(dest);

        if(bidirec) {
            adjList[dest].push_back(sour);
        }
    }

    void displayAdjList(){
        for( auto rows:adjList) {
            cout<<rows.first<<"->> ";
            for(auto elem:rows.second){
                cout<<elem<<",";
            }
            cout<<endl;
        }
    }

    void dfsHelp(T source,map <T,bool> &visited) {
        cout<<source<<",";
        visited[source] = true;

        for(auto elem:adjList[source] ) {
            if(!visited[elem]) {
                dfsHelp(elem,visited);
            }
        }
    }

    void dfs(T source) {
        map <T,bool> visited;

        for(auto rows:adjList) {
            visited[rows.first] = false;
        }

        dfsHelp(source,visited);
    }
};


int main()
{
    Graph <string>g1;
    g1.addEdge("ktm","bkt");
    g1.addEdge("bkt","banepa");
    g1.addEdge("banepa","panauti");
    g1.addEdge("ktm","thankot");

    g1.displayAdjList();

    g1.dfs("ktm");
    return 0;
}
