#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;scanf("%d",&test);
    while (test--){
        string a;
        scanf("%s",&a);
        printf("%s",a);
        if (a.size()>10){
            int s=a.size();
            printf("%c%d%c\n",a[0],s-2,a[a.size()-1]);
            cout << a[0] << s-2 << a[a.size()-1] <<endl;
        }
        else {
           printf("%s\n",a);
        }
    }

    return 0;
}
