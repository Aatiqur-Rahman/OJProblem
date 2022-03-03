#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t;
    int cases=1;
    while (t--){
        long long n;cin >>n;
        long long row,col;
        long long ceil_n = ceil(sqrt(n));
        long long lack  = n-ceil_n*ceil_n;
        if (lack == 0 ){

        }
        if (ceil_n==floor_n){
            if(n&1){
               row =1;
               col = ceil_n;
            }
            else {
                row = ceil_n;
                col = 1;
            }
        }
        else {
            int floor = floor_n*floor_n;
            if (n-floor==ceil_n){
                col=ceil_n;
                row=ceil_n;
            }
            else if (floor_n&1){
                if(n-floor > ceil_n){
                    col = (ceil_n*ceil_n)-n+1;
                    row = ceil_n;
                }
                else {
                    col = ceil_n;
                    row = n-floor;
                }

            }
            else {
                if(n-floor > ceil_n){
                    row = (ceil_n*ceil_n)-n+1;
                    col = ceil_n;
                }
                else {
                    row = ceil_n;
                    col = n-floor;
                }
            }

        }
        cout << "Case "<< cases <<": "<< row << " " << col << endl;
        cases++;
    }


    return 0;
}
