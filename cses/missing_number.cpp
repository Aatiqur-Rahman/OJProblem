#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum1 = 0 ;
    int sum2 = 0 ;
    for (int i =1;i<n;i++) {
        sum1+=i;
        int data;cin >> data;
        sum2+=data;
    }
    sum1+=n;
    cout << sum1-sum2 << endl;
    return 0;

}
