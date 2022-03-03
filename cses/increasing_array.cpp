#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n; // number of elements
    int cnt = 0 ; // number of moves required 
    cout << n << endl;
    int data1 ; cin >> data1 ; 
    for (int i = 1;i<n;i++) {

        int data2  ; cin >> data2;

        if (data2 < data1 ){ // if current data is less than previous one 

            cnt  +=  data1-data2; // increment counter until equl to current data 

        }
 
        data1 = data2 ; // current  data now become previous one  
    }

    cout << cnt << endl ;  // print the final moves 
    
    return 0;
}
