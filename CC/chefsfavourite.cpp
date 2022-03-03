#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int t ;cin >> t;
    string s2="code";
    string s3 = "chef";
    while (t--){
        int n ; cin >>n;
        string s1;cin>> s1;
        int j = 0 ,k =0;
        int i ;
        for (i = 0 ;i<s1.size();i++){
            if (s1[i]==s2[j]){
                j++;
                if (j==4){
                    cout << "AC" << endl;
                    i=s1.size();
                }
            }
            else {
                j=0;
                if (s1[i]==s2[j]){
                j++;
                }
            }
            if (s1[i]==s3[k]){
                k++;
                if (k==4){
                    cout << "WA" << endl;
                    i=s1.size();
                }
            }
            else {
                k=0;
                if(s1[i]==s3[k]){
                k++;
                }
            }
        }
    }

    return 0;
}
