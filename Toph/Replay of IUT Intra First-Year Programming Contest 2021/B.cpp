#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)

using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}
void solve(){
}
int solve_i(int res){

    return res;
}

int main (){
    fasterio();
    w(t){
        string str1,str2;cin >> str1 >> str2;
        cout << "Name: " << str1 << endl;
        cout << "Student id: " << str2 << endl;
        cout << "Batch: " << "20" << str2[0] << str2[1] << endl;
        cout << "Department: ";
            if (str2[4]=='1' && str2[5]=='1') {
                cout << "MPE" << endl;
            }
            else if (str2[4]=='1' && str2[5]=='2'){
                cout << "MPE" << endl;
            }
            else if (str2[4]=='2' && str2[5]=='1') {
                cout << "EEE" << endl;
            }
            else if (str2[3]=='3' && str2[5]=='1'){
                cout << "TVE" << endl;
            }
            else if (str2[4]=='4' && str2[5]=='1'){
                cout << "CSE" << endl;
            }
            else if (str2[4]=='4' && str2[5]=='2'){
                cout << "CSE" << endl;
            }
            else if (str2[4]=='5' && str2[5]=='1'){
                cout << "CEE" << endl;
            }
            else {
                cout << "BTM" << endl;
            }
        cout << "Section: " << str2[6] << endl;

    }
    return 0;
}
/**11 - Mechanical and Production Engineering (MPE)

1212 - Mechanical and Production Engineering (MPE)

2121 - Electrical and Electronic Engineering (EEE)

3131 - Technical and Vocational Education (TVE)

4141 - Computer Science and Engineering (CSE)

4242 - Computer Science and Engineering (CSE)

5151 - Civil and Environmental Engineering (CEE)

6161 - Business and Technology Management (BTM)**/
