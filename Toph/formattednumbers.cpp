
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	string str; // given number 
	cin >> str ;
	if (str.size()<4){ // if less then 4 or equal to three don't need a comma 
		for (int i=0;i<str.size();i++){
			cout << str[i] ;
		}
		cout << endl;
	} 
	else {
		for ( int i = 0 ; i<str.size() ; i++ ){
			cout << str[i] ;
			if ( i%3==2 && i!=str.size()-1 ){ // after groups print a comma but not at the end 
				cout << "," ;
			}
		}cout << endl;
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
