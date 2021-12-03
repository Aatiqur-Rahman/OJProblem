#include <bits/stdc++.h>
using namespace std;
class G{
    int v; // number of vertex
    list <int> *e;
    bool *visited;// adjacency list pointer
public:
    G(int v){
        this->v=v;
        e=new list <int > [v]; //adjacency list
        visited=new bool[v];
        for(int x=0;x<v;x++){
            visited[x]=false;
        }
    }
    void addEdge(int x,int y){  // void addEdge(string x , string y){}
                                // e[x].push_back(y);
        e[x].push_back(y);
        e[y].push_back(x);
    }
    bool check(){
       bool flag = true;
       for (int i=1 ;i<v;i++)
       {
            if(visited[i]==false)
            {
                return false ;

            }
       }
       return flag;
    }
    /*void printEdge(){  // printing graph
        for (int i=0;i<v;i++){
            cout << i << "--->" ;
            for (auto x:e[i]){
                cout<<x;
            }
            cout << endl;
        }
    }*/
    bool BFS(int starting_vertex,int l){ // Breadth First Search function call
        queue <int > stored_v_q; // queue for storing to visit neibhors
        stored_v_q.push(starting_vertex);
        //path.push_back(starting_vertex);
        visited[starting_vertex]=true;
        while(!stored_v_q.empty()){ // until queue is empty
            if(l==0)break;
            starting_vertex=stored_v_q.front();
            stored_v_q.pop();
            for(auto nbr:e[starting_vertex]){
                //cout << "neighbors of parent vertex : " << nbr << endl;
                if(!visited[nbr]){
                    stored_v_q.push(nbr);
                    visited[nbr]=true;
                    l--;
                    if(l==0)break;
                }
            }
        }
    }

};


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int v,edge,m;scanf("%d %d %d",&v,&edge,&m);
        G graph(v+1);
        while(edge--){
            int a,b;
            scanf("%d %d",&a,&b);
            graph.addEdge(a,b);
        }
        while(m--){
            int s,l;
            scanf("%d %d",&s,&l);
            graph.BFS(s,l);
        }
        bool flag = graph.check();
        if (flag==true)cout << "YES" << endl;
        else {cout << "NO" << endl;}
        }

    return 0;
}
