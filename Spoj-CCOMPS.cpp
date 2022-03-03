#include <bits/stdc++.h>
using namespace std;
class graph{
public:
    int v;
    list <int> *e;
    bool *visited;
graph(int v){
    this->v=v;
    e=new list <int> [v];
    visited = new bool[v];
    for (int i=1;i<=v;i++){
        visited[i]=false;
    }
    int counter=0;
}
void addEdge(int x , int y){
    e[x].push_back(y);
    e[y].push_back(x);

}
void BFS(int s_v){
    queue <int> q;
    q.push(s_v);
    while(!q.empty()){
        v=q.front();q.pop();
        for (auto nbr:e[s_v]){
            if (visited[nbr]==false){
                q.push(nbr);
                visited[nbr]=true;
            }
        }
    }
}

};
int main(){
    return 0;
}
