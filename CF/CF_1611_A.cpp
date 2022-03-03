#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int main () {
    int t ; cin>> t;
    while (t--){
        long long n;
        cin >> n;
        while (n>0){
            long long t = n%10;
            n/=10;
            v.push_back(t);
        }
        if (v.size() > 1 && (v[0]&1)==0){
            cout << 0 << endl;
        }
        else if (v.size() ==1 && (v[0]&1)==1){
            //cout << (v[0]&1) <<endl;
            cout<< -1 << endl;
        }
        else if (v.size() ==1 && (v[0]&1)==0) {
            cout << 0 << endl;
        }
        else {
            if ((v[v.size()-1]&1)==0 ){
                cout << 1 << endl;
            }
            else {
                bool flag = false ;
                for (int i = 0;i< v.size();i++){
                    if ((v[i]&1)==0){flag =  true;break;}
                }
                if (flag==true ){cout << 2 << endl;}
                else {cout << -1 << endl;}
            }
        }
        v.clear();
    }
    return 0;
}
