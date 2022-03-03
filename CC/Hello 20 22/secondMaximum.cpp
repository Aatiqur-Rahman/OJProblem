#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)

using namespace std;
/** Data Container **/
vector <int > v;
set <int> s;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}
void solve(){
}
int solve_i(int res){

    return res;
}

int main (){
    fasterio();
    int n;cin >> n;
    for (int i =0;i<n;i++) {
        int data;cin >> data;
        //v.push_back(data);
        s.insert(data);
    }
    //sort(v.begin(),v.end());
    if (s.size()==1)cout << -1 << endl;
    else {
        auto it = s.end();
        it--;
        it--;
        cout << *it << endl;
    }
    return 0;
}
