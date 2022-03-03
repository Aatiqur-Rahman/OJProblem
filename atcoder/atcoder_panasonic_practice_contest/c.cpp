#include <bits/stdc++.h>
#define MAXN 100001
using namespace std;
int arr[MAXN];
int main(){
    int n,q;
    scanf("%d",&n);
    //scanf("%d",&q);
    memset(arr,0,sizeof(arr));
    while (n--){
        int data;
        cin >> data;
        if (data > 5){
            if (data&1){
                data/=2+1;
            }
            else {
                data/=2;
            }
        }
        arr[data]+=1;
        for(int i =1;i<data;i++){
            arr[i]+=1;
        }

    }
    for (int i = 1;i<=5; i++){
        cout << arr[i] << " " ;

    }cout << endl;
    /***while (q--){
        int a;
        cin >> a ;
        if (a>5){
            if (a&1){
                a/=2+1;
                cout << arr[a] << endl;
            }
            else {
                a/=2;
                cout << arr[a] << endl;
            }
        }
    }**/
    return 0;
}
