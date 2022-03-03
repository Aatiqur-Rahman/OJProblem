
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	string str;cin >> str ;

	for ( int i = 0 ; i < str.size() ; i ++ ) {

		if (str[i] >= 65 && str[i] <= 90 ) {

			str[i] =  str[i] + 32 ;
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){
				str[i] = '.'; 
			}
		}
		else {

			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){
				str[i] = '.'; 
			}
			

		}

	}

	cout << "." ;

	int j = 0 ;  

	for ( int i = 0 ;i < str.size() ;i ++ ) {

		bool flag = false ; 
		
		if ( str[i] == '.' &&  i==j  ){

			j++; 

		}
		else if ( str[i] != '.' ){

			if ( i != 0 && str [i-1] != '.'  )
				cout << "." ; 
			
			cout << str[i] ; 

		}
		else {

			if (str [i-1] == '.'){

				continue ; 
			}

			for ( int j = i+1 ; j<str.size() ;j++) {
				if ( str[j] != '.' ) {
					flag = true ; 
					break ;
				}
			}
			if (flag) cout << "." ; 

		}

	}

	//cout << str ; 

	//cout  << endl;
	
	
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
