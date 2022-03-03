#include <bits/stdc++.h>
#define ll long long

using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}


int main (){
    fasterio();
    //freopen("in.txt",r,stdin);
    int t;cin >>t ;
    while (t--) {
        int n ;cin >>n;
        int data1;cin >>data1;
        int cnt=1;
        for (int i= 1;i<n;i++){
            int data;cin >>data;
            if (data1>=data){
                cnt++;
            }
            data1=data;
        }
        cout << cnt << endl;
    }
    return 0;
}
