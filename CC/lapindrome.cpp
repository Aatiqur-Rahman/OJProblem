#include <bits/stdc++.h>
#define ll long long

using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}


int main (){
    //fasterio();
    //freopen("in.txt",r,stdin);
    int t;cin>> t;
    while (t--){
        string str;cin >> str;
        int s=str.size();
        int cnt= 0;
        if (s&1){

            for (int i = 0;i<s/2;i++){
                for (int j= s/2+1;j<str.size();j++){
                    if (str[i]==str[j]){
                        str[j]='0';
                        cnt++;
                        j=str.size();
                    }
                }
            }
        }
        else {

            for (int i = 0;i<s/2;i++){
                for (int j= s/2;j<str.size();j++){
                    if (str[i]==str[j]){
                        str[j]='0';
                        cnt++;
                        j=str.size();
                    }
                }
            }
        }
        if(cnt-1==s/2-1)cout << "YES" << '\n';
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
