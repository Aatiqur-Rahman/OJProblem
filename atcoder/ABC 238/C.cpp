
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

template < class t , class _int >

bool isPalindrome ( t str[] , _int& s ) { // checking pallindrome 
	t endstr = str+s;

	while ( str <= endstr ) {
		if (*str != *endstr) {
			return false ; 
		}

		str++;
		endstr--;


	}
	return true ; 

}
bool isPalindromeA (string str ) {

	bool flag = true ; 


	int i = str.size()-1 , j = 0 ;

	int cnt_j = 0 , cnt_i =  0 ; 

	if ( str[i] == 'a' ) {

			while ( str[i] == 'a' ) {
				i--;
				cnt_i++;
			}

			while (str [j] == 'a'){
				j++;
				cnt_j++;
			}

	}
		

	if (cnt_i >= cnt_j) {

		for (  i = i , j = j ; i > j ; i-- , j++ ) {

			// aaphpaaaaaaaaaaaaa  
			// j                i

			if ( str [i] != str[j] ) { 

				i = 0 ; flag = false ; 
			}

		}

	}
	else {

		flag= false ; 

	}

	
	return flag ; 

}

void solve(){

	string str = "aba" ; 

	cout <<  (isPalindrome (str , 2) ? "Yes" : "No" ) << endl ;  


	// if stirng is palindrome 

	/*if (isPalindrome(str)){

		cout << "Yes" << endl; 

	}


	else if (isPalindromeA(str)) {

		cout << "Yes" << endl; 
 
	}
	else  {

		cout << "No" << endl; 
	} */

	
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
