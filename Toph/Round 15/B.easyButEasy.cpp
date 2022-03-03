
#include <bits/stdc++.h>


using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}



bool isPallindrome (string& str){
	for ( int i = 0 , j = str.size() -1  ;  i < j ; i++ , j--){
		if (str[i] != str[j]) {
			return false ; 
		}
	}
	return true ; 
}

void solve(){

	int n; cin >> n;

	string str ; cin >> str ; 

	int cnt_1= 0 , cnt_0 = 0 ; 

	for ( int i  = 0 ; i < str.size() ; i ++ ){

		if (str[i] == '1' ){
			cnt_1 ++ ;
		}
		else {
			cnt_0 ++ ; 
		}
	}

	if ( isPallindrome (str)) {
		cout << "Bob" << endl; 
	}
	else if ( n == 3 ) {
		cout << "Alice" << endl; 
	}
	else if ( n <= 2 ){
		cout << "Bob" << endl;
	}
	else {
		if ( n%2 == 0 ) {
			if (cnt_1 % 2 == 0 ){
				cout << "Bob" << endl; 
			}
			else {
				cout << "Alice" << endl;
			}
		}	
		else {
			if ( str[ (n/2) + 1 ]  == 1 ) {
				cnt_1 -= 1 ;
			}
			else {
				cnt_0 -= 1 ; 
			}

			if (cnt_1 % 2 == 0 ){
				cout << "Bob" << endl; 
			}
			else {
				cout << "Alice" << endl;
			}
		}
	}


	
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
