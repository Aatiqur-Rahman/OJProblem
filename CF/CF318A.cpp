#include <bits/stdc++.h>
#define uint uint64_t
using namespace std;
int main(){
    uint n,num; cin >> n >> num;
    if (n&1){
        n=(n/2)+1;
    }
    else {
        n/=2;
    }
    if (n==1){
        cout << 1 << endl;
    }
    else if (num==n){
        cout << (num*2)-1 << endl;
    }
    else if (num>n){
        num-=n;
        cout << num*2 << endl;
    }
    else {
        cout << num*2-1 << endl;
    }

    return 0;
}
