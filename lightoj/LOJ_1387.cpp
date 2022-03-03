#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;cin >>q;
    int i = 1;
    while (q--){
        int t;cin>>t;
        bool flag = false ;
        long long sum=0;
        while (t--){
            int num;
            string str;
            cin >> str;
            if (str[0]=='d'){
                cin >> num;
                sum+=num;
            }
            else {
                if (flag==0){cout << "Case " << i << ": " << endl;flag=true;}
                cout  <<  sum << endl;
            }
        }
        i++;

    }
    return 0;
}
