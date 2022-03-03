#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--){
        int n;cin >> n ;
        int arr[101]={0};

        int counter = 0;
        bool flag = false;
        for (int i = 0;i<n;i++) {
            int data;cin >>data;
            if (data<0){
                data*=-1;
            }
            arr[data]++;

        }
        for (int i = 1;i<=100;i++) {
            if (arr[i]>=2){
                counter+=2;
            }
            else if (arr[i]==1) {
                counter+=1;
            }
            else {}
        }
        if (arr[0]>0){
            counter++;
        }
        cout << counter << endl;
    }

    return 0;
}
