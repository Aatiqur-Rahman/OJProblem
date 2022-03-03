#include <bits/stdc++.h>
#define MAXN 1000001
using namespace std;
int main(){
    int t ;cin >> t;
    while (t--){
        int n;
        cin >> n;
        int maxx= INT_MIN;
        int minn = INT_MAX;
        while (n){
            int data;
            cin >> data;
            if (data>maxx)maxx=data;
            if (data<minn)minn=data;

            n--;
        }
        int res = maxx-minn;
        if (maxx-minn<=3){cout << "0" << endl;}
            else {
                cout << maxx-res << endl;
            }
    }
    return 0;
}
