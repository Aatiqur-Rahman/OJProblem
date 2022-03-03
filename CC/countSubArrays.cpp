#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}


int main (){
    fasterio();
    int arr[]={1,2,3,4,5};
    int n = sizeof (arr)/sizeof(arr[0]);
    int cnt=0;
    int answer= 0;
    for (int i =0;i<n;i++) {
        for (int j= i+1;j<n;j++){
            if (arr[i]<=arr[j]){
                cnt++;
                i++;
            }
            else {

                answer+=(1<<cnt)-1;
                cnt=0;
                i++;
            }
        }
        i=n;
    }
    if (cnt!=0){
        answer+=(1<<cnt)-1;
    }
    cout << answer+n << endl;
    return 0;
}
