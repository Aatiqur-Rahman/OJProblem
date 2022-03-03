#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int t ; cin >> t;
    while (t--){
        string s = "helloworld";
        string su ;cin >> su;
        int counter= 0 ;
        bool flag = true;
        for (int i = 0;i<su.size();i++) {
            for(int j=0;j<s.size();j++){
                if (su[i]==s[j]){
                    counter++;
                    s[j]=NULL;
                    j=s.size();
                }
            }
            if (counter==10){
                    cout << "Yes" << endl;
                    flag = false;
                    i=su.size();
            }

        }
        if (flag==true)cout << "No" << endl;
        //cout << s << endl;
    }

    return 0;
}
