/** solved **/
#include <bits/stdc++.h>
using namespace std;
int main(){
    /*char arr[11];
    cin >> arr;
    int  n  = strlen(arr);
    int ind  = 0;
    int pos = 0;
    for (int i = n-1 ; i >= 0 ;i--){
        if (arr[i]=='4'){
            ind += (1<<pos);
        }
        else {
            ind +=(1<<(pos+1));
        }
        pos++;
    }
    cout << ind << endl ;*/
    string str;cin>>str;
    int j=0;
    int pos=0;
    for (int i =str.size()-1;i>=0;i--){
        if (str[i]=='7'){
                pos+=(1<<j+1);
        }
        else {
            pos+=(1<<j);
        }
        j++;
    }
    cout << pos << endl;
    return 0;
}
