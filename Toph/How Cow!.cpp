#include <bits/stdc++.h>
#define PI 3.1416

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        double res;
        cin >> n;
        n=n*n;
        res=PI*n;
        printf("%.3f\n",res);
    }
    return 0;
}
