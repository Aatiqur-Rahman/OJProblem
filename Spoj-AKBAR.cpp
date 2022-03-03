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
    }
    void addEdge(int x,int y){  // void addEdge(string x , string y){}
                                // e[x].push_back(y);
        e[x].push_back(y);
        e[y].push_back(x);
    }
    void memset_(){
        memset(visited,0,sizeof(visited));
        visited[0]=true;
        visited[v]=true;
    }
    bool check(){
       for (int i=0 ;i<v;i++)
       {    //cout << "i : " << i << " " ;
            if(visited[i]==false)
            {
                return false ;

            }
       }
       cout << endl;
       return true;
    }

    bool BFS(int s,int l){ // Breadth First Search function call
        queue <int > q; // queue for storing to visit neibhors
        q.push(s);
        visited[s]=true;
        if(l==0)return true;
        while(!q.empty()){ // until queue is empty
            s=q.front();q.pop();
            for(auto nbr:e[s]){
                //cout << "neighbors of parent vertex : " << nbr << endl;
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                    l--;
                    if(l==0)return true;
                }
            }
        }
    }

};


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int v,edge,m;cin >> v >> edge >> m;
        G graph(v+1);
        graph.memset_();
        while(edge--){
            int a,b;
            scanf("%d %d",&a,&b);
            graph.addEdge(a,b);
        }
        while(m--){
            int w,strong;
            cin >> w >> strong ;
            graph.BFS(w,strong);
        }
        bool flag = graph.check();
        if (flag==true)cout << "YES" << endl;
        else {cout << "NO" << endl;}
        }

    return 0;
}
