#include <bits/stdc++.h>
using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        long long x,n;
        cin >> x >> n;
        if ((x&1)==0){
            int m = n%4;
            if (m==0){
                cout << x << endl;
            }
            else if (m==1) {
                cout << x-n << endl;
            }
            else if (m==2) {
                cout << x+1 << endl;
            }
            else {
                cout << x+n+1 << endl;
            }
        }
        else {
            int m = n%4;
            if (m==0){
                cout << x << endl;
            }
            else if (m==3) {
                cout << x-(n+1) << endl;
            }
            else if (m==2){
                cout << x-1 << endl;
            }
            else {
                cout << x+n << endl;
            }
        }
    }
    return 0;
}
