#include <bits/stdc++.h>
#define MAXN 1000000
using namespace std;
int visited[MAXN];
list <int > e[MAXN];
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
    bool BFS(int st,int en){
        memset(visited,0,sizeof(visited));
        queue <int> q;
        q.push(st);
        visited[st]=true;
        while (q.size()!=0){
            int s = q.front();q.pop();
            //cout << "Starting vertex " << s << endl;
            for(auto i : e[s]){
                if (visited[i]==false ){
                    visited[i]=true;
                    q.push(i);
                    if (i==en){
                        return true;
                    }
                }
            }

        }
        return false ;
    }
};
int main(){
    int n,q;
    cin >> n >> q;
    G g(n);

    while (q--){
        int a,b,c;
        cin >> a >> b >> c;
        if (a==0){
            g.addEdge(b,c);
        }
        else {
          cout << g.BFS(b,c) << endl;
        }
    }
    return 0 ;
}
