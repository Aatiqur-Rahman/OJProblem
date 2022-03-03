#include <bits/stdc++.h>

using namespace std;

set <int> a;

int main(){
    int n,d;
    int count=0;
    cin >> n;
    d=sqrt(n);
	if (n==2) {cout << "1" << endl;return 0;}
	if (n==1) {cout << "0" << endl; return 0;}
	if (n==3) {cout << "1" << endl; return 0;}
	if (n==4) {cout << "2" << endl; return 0;}
	if (n==5) {cout << "1" << endl; return 0;}
    for (int i=1;i<=d;i++){
        if (n%i==0){
            a.insert(i);a.insert(n/i);
        }
    }
    cout << a.size()-1 << endl;
    return 0;
}

