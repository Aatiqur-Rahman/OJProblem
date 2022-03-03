#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)

using namespace std;
/** data containers **/
vector <int> v;
set <int> s;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}
void solve(int n){
    s.insert(n);s.insert(1);
    for (int i =2;i<=sqrt(n);i++){
        if(n%i==0){s.insert(i);s.insert(n/i);}
    }
}
void print(){
    for (auto i : s){
        cout << i << " ";

    }
    cout << '\n';
}
int solve_i(int res){

    return res;
}

int main (){
    fasterio();
    int n;cin >>n;
    solve(n);
    print();
    return 0;
}
