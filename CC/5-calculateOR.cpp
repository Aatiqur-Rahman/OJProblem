#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int A[]= {1,2,3};
int N=3;
int calculate_or (int i) {
    if (i == N){
        return A[i];
    }
    if (calculate_or(i+1) == A[i]){
      return A[i];

    }
    int temp =  calculate_or(i+1) | A[i];
    return temp ;
}
int main (){

    fasterio();
    cout << calculate_or(1) << endl;
    return 0;
}
