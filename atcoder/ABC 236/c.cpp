
#include <bits/stdc++.h>
#define N 100001

using namespace std;

vector <string > s1 ;
vector < string > s2;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    //cout.tie(NULL);
    
}

void solve(){
	 int n , m ;
	 cin >> n >> m ;




	
	 for ( int i = 0; i< n ;i ++) {
	 	string  data ; cin >> data ;
	 	s1.push_back (data) ; 

	 }
	 for ( int i = 0; i< m ;i++) {
	 	string data ;cin>> data;
	 	s2.push_back ( data ) ; 

	 }

	 set <string > temp (s2.begin() , s2.end());

	 for ( auto i : s1 ) {
	 	 cout << ( temp.count(i) ? "Yes" : "No" )  << '\n' ; 
	 }
	 
	/* for ( int i =0 ;i<m ;i++) {

	 	string data ; cin >> data ;  

	 	if (i != 0 || i!= m-1){


	 		for ( int j = i ;j<n;j++) {

	 			if (data == s[j] ){


	 				mark[j]=1;
	 			}

	 		}

	 	}
	 	
	 	
	 }
	 for ( int i = 0 ; i  < n ;i++ ) {
	 	if (mark[i]==1)
	 		cout << "Yes" << '\n' ;
	 	else {cout<< "No" << '\n' ;}
	 }*/
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
