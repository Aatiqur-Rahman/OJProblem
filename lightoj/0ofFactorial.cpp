#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin>>t ;while (t--)
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int main (){

    fasterio();
    w(t){
        int n ; cin >> n;
        int cnt=0;
        int t=1;
        for (int i = n;i>0;i-=t){
            if (i%5==0 || i%10==0  ){
                cnt++;
                //t=5;
            }
            if (i%25==0){
                cnt++;
                //t=5;
            }
            if (i%125==0){
                cnt++;
            }
            if (i%1000==0){
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
