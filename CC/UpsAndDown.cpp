#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> v;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int main (){
    //fasterio();
    int t ; cin >> t;
    while (t--){
        int n;cin >>n;
        for (int i = 0;i<n;i++) {
            int data; cin>> data;
            v.push_back(data);
        }
        /**sort(v.begin(),v.end());
        for (int i = 0,j =v.size()-1;i<n/2;i++,j--) {
            cout << v[i] << " " << v[j] << " " ;
        }
        if (n&1){
            cout << v[n/2];
        }
        cout << endl;**/
        for (int i = 0;i<n;i++){
            for (int j=i+1;j<n;j++) {
                if (i&1){
                    if (v[i]<=v[j]){
                        swap(v[i],v[j]);
                    }
                }
                else {
                    if (v[i]>=v[j]){
                        swap(v[i],v[j]);
                    }
                }
            }
        }
        for (auto i : v) {
            cout << i << " ";
        }
        cout << endl;
        v.clear();
    }

    return 0;
}
