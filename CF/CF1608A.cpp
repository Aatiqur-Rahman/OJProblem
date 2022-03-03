//Accepted
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;scanf("%d",&t);
    while (t--){
        int s ;
        scanf("%d",&s);
        if (s==1){
            printf("1\n");
        }
        else{
            for (int i=1;i<=s;i++){
                printf("%d\n",i+2);
            }

        }
    }
    return 0;
}
