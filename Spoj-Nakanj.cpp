#include <bits/stdc++.h>
using namespace std;
class G{
    int v; // number of vertex
    list <string > *e;
    vector <bool >*visited ;
public:
    G(int v){
        printf("graph is called with vertex %d \n",v);
        this->v=v;
        e=new list <string > [v]; //adjacency list
        visited = new vector <bool> [v];
        map <int,string> m;
    }
    void addEdge(int x,int y){ // adding edge for non-directional graph
        e[x].push_back(y);
        e[y].push_back(x);

    }
    void print(){
        for (int i=0;i<v;i++){
            cout << i << "--->" ;
            for (auto x:e[i]){
                cout<<x;
            }
            cout << endl;
        }

    }
    bool BFS(string starting_vertex){  // Breadth First Search function call
        queue <string > stored_v_q; // queue for storing to visit neibhors
        stored_v_q.push(starting_vertex);
        visited[starting_vertex].push_back();
        while(!stored_v_q.empty()){ // until queue is empty
            starting_vertex=stored_v_q.front();
            stored_v_q.pop();
            for(auto nbr:e[starting_vertex]){
                //cout << "neighbors of parent vertex : " << nbr << endl;
                if(!visited[nbr]){
                    stored_v_q.push(nbr);
                    visited[nbr]=true;
                }

            }
        }
    }

};


int main(){
    G graph(5);
    m[1]="a1";
    m[2]="a2";
    m[3]="a3";
    G.addEdge(1,18);
    G.addEdge(2);
    G.addEdge("a3","b3");
    print();
    return 0;
}
