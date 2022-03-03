
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	string str; // player position in binary 
	cin >> str;
	bool flag = true; 
	int cnt  = 0 ;
	for (int i = 0 ; i<str.size();i++){
		if (str[i]=='1'){
			int cnt  = 1;
			for(int j = i+1;j<=str.size();j++){ // loop for next opposite 7 player 
				if (str[j] == '1'){  // checking consecutive 7 player is of opposite player or not 
					cnt++;
					if (cnt == 7 ){
						cout << "YES" << endl;
						j = str.size() ;
						i = str.size() ;
						flag = false ;
					}
				}
				else {
					j=str.size();
				}
			}
		}
		else {
			int cnt  = 1;
			for(int j = i+1;j<=str.size();j++){
				if (str[j] == '0'){
					cnt++;
					if (cnt == 7 ){
						cout << "YES" << endl;
						j = str.size() ;
						i = str.size() ;
						flag = false ; 
					}
				}
				else {
					j=str.size();
				}
			}
		}
	}
	if (flag){  cout << "NO" << endl;  }
}

int main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	int c =1;
	//cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
