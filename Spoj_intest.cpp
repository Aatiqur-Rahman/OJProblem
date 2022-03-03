#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int main (){
    fasterio();
    int n , k ; cin >>n >>k;
    int cnt = 0 ;
    for (int i = 0;i<n;i++){
        int data; cin >> data;
        if (data%k==0){
            cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}
