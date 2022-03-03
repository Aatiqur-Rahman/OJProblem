/**https://atcoder.jp/contests/abc231/tasks/abc231_b
Accepted
**/
#include <bits/stdc++.h>
using namespace std;
vector <string> vc;
set <string > st;

int main (){
    int a;
    cin >> a ;
    while (a--){
        string s;
        cin >> s;
        vc.push_back(s);
        st.insert(s);
    }
    int m=0;
    string str;
    for (auto i : st){
        int counter=0;
        for (int x =0;x<vc.size();x++){
            if(i==vc[x]){
                counter ++ ;
                if (m<counter){
                    m=counter;
                    str = i;
                }
            }

        }
    }
    cout << str << endl;
    return 0 ;
}
