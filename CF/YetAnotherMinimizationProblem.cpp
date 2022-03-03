
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n; 
	int m_a = INT_MIN ;
	int m_b = INT_MIN ; 

	vector <int > a , b ;

	int sum_1 = 0 ;
	int sum_2 = 0 ;


	for ( int i = 0 ; i < n ; i++ ) {
			int data ; cin >> data ;
			if (data > m_a ) m_a = data ;
			a.push_back(data) ; 
			sum_1 += data ;
	}

	for ( int i = 0 ; i < n ; i++ ) {
			int data ; cin >> data ;
			if (data > m_b ) m_b = data ;
			b.push_back(data) ; 
			sum_2 += data ;

	}

	cout << sum_1 << "  " << sum_2 << endl; 
	if ( sum_1 > sum_2 ) {
		int diff = sum_1 -  sum_2  ; 

			int temp  =  sum_1 ; 
			for ( int i = 0 ; i < n ; i++ ) {
					if ( b[i] < a[i] ) {
						temp -= a[i] ;
						temp += b[i] ; 

						if ( temp - sum_2 < diff ){

							cout << "temp" <<  temp << endl; 
							swap (a[i],b[i]) ; 
							diff= temp-sum_2 ;

							cout << "diff" << diff << endl; 
						}
					}
			}
	}else {
		int diff = sum_2 -  sum_1  ; 

			int temp  =  sum_2 ; 
			for ( int i = 0 ; i < n ; i++ ) {
					if ( b[i] < a[i] ) {
						temp -= a[i] ;
						temp += b[i] ; 

						if ( temp - sum_1 < diff ){
							swap (a[i],b[i]) ; 
							diff= temp-sum_1 ;
						}
					}
			}
	}
	for ( auto i : a ) {
			cout << i << " " ;
	}
	cout << endl; 

	for ( auto i : b ) {
			cout << i << " " ;
	}
	cout << endl; 

	int sum = 0 ; 

	for ( int i  = 0 ; i < n ; i++ ) {
		for ( int j = i+1 ; j < n ; j++ ) {

			int temp1 = a[i] + a[j] ;
			int temp2 = b[i] + b[j] ;

			sum += (temp1*temp1) ;
			sum += (temp2*temp2) ;

		}
	}
	cout << sum << endl; 




}

int main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	int c =1;
	cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
