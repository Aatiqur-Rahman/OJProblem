#include <bits/stdc++.h>
using namespace std;
int main () {
    int cases ;cin >> cases;
    for (int i = 1;i<=cases;i++) {
        int n; string str;cin >> n >> str;
        if (str[0]=='A'){
            n%=3;
            if (n==1){
                cout << "Cases " << i << ": " << "Bob" << endl;
            }
            else {
                cout << "Cases " << i << ": " << "Alice" << endl;
            }
        }
        else {
            n%=3;
            if (n==0){
                cout << "Cases " << i << ": " << "Alice" << endl;
            }
            else {
                cout << "Cases " << i << ": " << "Bob" << endl;
            }
        }
    }
    return  0 ;
}
