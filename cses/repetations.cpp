
#include <bits/stdc++.h>
using namespace std;
vector <char> vc;
set <char > st;

int main (){
    //int a;
   // cin >> a ;
    //while (a--){
        string s;
        cin >> s;
        for (int i = 0;i<s.size();i++){
            vc.push_back(s[i]);
            st.insert(s[i]);
        }

    //}
    int m=0;
    string str;
    for (auto i : st ){
        int counter  = 0 ;
            for (int x =0;x<vc.size();x++){
                if(i==vc[x]){
                    //cout << i << " " << vc[x] << endl;
                    counter ++ ;
                    //cout << "counter : " << counter << endl;
                    if (m<counter){
                        m=counter;
                        //cout << "m : " << m << endl;
                        str = i;
                    }
                }
                else {
                    counter=0;
                    //cout << *i << endl;
                }

            }
    }
    cout << m << endl;
    //cout << str << endl;
    return 0 ;
}
