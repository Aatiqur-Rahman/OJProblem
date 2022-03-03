
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	string str ; cin >> str ; 


	int sum = 0 ;

	vector <int > v(str.size(),0); // inititally all digit are 0 

	for ( int i = 0 ; i < str.size () ; i ++ ) {

		sum += str [i] - '0' ; 

		int temp = sum , j = i ;


		// 12345 
		// 13605 
		// 	 1    sum is 10 , so have carry 1 
		//    1	  sum is 15 , so have carry 1 

		// 13715  final answer 

		while ( temp > 9 and j >= 1) { // check if the sum is greater than 9 and position 

				int rem = temp % 10 ;  //  last digit 

				v [j] = rem ; // store the last digit on the answer vector 
 
				temp = temp / 10 ; // carry 


				temp += v [j-1] ;  // add carry with previous position of answer vector 

				j -- ; // decrease the position 

		}

		v [j] = temp ; 


	}

	for ( auto i : v ) {
			cout << i ;
	}
	cout << endl; 	
	
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
