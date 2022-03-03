#include <bits/stdc++.h>
using namespace std;
int fn(int b){
    cout << b << endl;
    if (b==0) return 1;
    return fn(b-1);
}
int main (){
    int n=5;
    cout << fn(n);
    return 0;
}
