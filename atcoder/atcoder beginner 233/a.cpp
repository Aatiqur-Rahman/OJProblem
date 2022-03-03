#include <bits/stdc++.h>
using namespace std;
int main(){
    int a , b ; cin >> a >> b;
    int res  = b-a;
    if (res>0){
        int div=res/10;
        int mod = res%10;
        if (mod>0){
            cout << div+1 << endl;
        }
        else {cout << div << endl;}
    }
    else {
        cout << "0" << endl;
    }
    return 0;
}
