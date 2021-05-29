#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template <typename T>


class Graph{
    map <T,vector<T>> adjList;

public:
    // assuming the graph is bidirectional
    void addEdge(T source,T destination,bool biDirec = true) {
        adjList[source].push_back(destination);

        if(biDirec) {
            adjList[destination].push_back(source);
        }
    }

    void printAdjList() {
        for(auto rows:adjList ) {
            cout<<rows.first<<"->> ";

            for(auto vectorElem:rows.second ) {
                cout<<vectorElem<<",";
            }
            cout<<endl;
        }
    }

    void bfs(T src) {

        map<T,bool> visited;
        queue <T> q1;

        for(auto rows:adjList) {
            visited[rows.first] = false;
        }

        cout<<"bfs starting from "<<src;
        visited[src] = true;

        q1.push(src);

        while(!q1.empty()) {
            auto node = q1.front();
            q1.pop();
            cout<<node<<" ";
            for(auto child:adjList[node]) {
                if(!visited[child]){
                    q1.push(child);
                    visited[child]=true;
                }
            }
        }

    }
};



int main()
{
    Graph<string> g1;
    g1.addEdge("bkt","ktm");
    g1.addEdge("bkt","banepa");
    g1.addEdge("ktm","thankot");

    g1.printAdjList();
    g1.bfs("bkt");
    return 0;
}
