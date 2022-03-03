#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; scanf("%d",&t);
    while (t--){
        long long int counter=0;
        int s;
        scanf("%d",&s);
        for (int i =0;i<s;i++){
            long long int data;
            scanf("%lld",&data);
            counter+=data-1;
        }
        cout <<  counter << endl;
    }
    return 0;
}
