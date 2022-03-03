#include <bits/stdc++.h>
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main (){
    fasterio();
    int k=0;
    int n,x;cin >> n >> x;
    for (int i =0;i<n;i++){
        int data;cin >>data;
        if (data%x==0)k++;
    }
    cout << k << endl;
    return 0;
}
