#include <bits/stdc++.h>
#define uint uint64_t
using namespace std;
int main (){
    int t;cin >> t;
    while(t--){
        uint x=0;
        int n,m,a,b;
        cin >> n >> m >> a >> b;
        for(int i = 0 ;i<n;i++){
            uint temp = (a*i+b)/m;
            x+=temp;
        }
        cout << x << endl;
    }
    return 0;

}
