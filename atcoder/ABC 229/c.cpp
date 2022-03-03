
#include <bits/stdc++.h>
#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

bool desSort( const pair < int , int > & a , const pair <int , int > & b  ){
	return a.first>b.first ; 
}


void solve(){

	int n , w ; cin >> n >> w ; // number of deliciousness and total weight ; 

	vector <  pair <int , int > > v ; 

	for ( int i = 0 ; i < n ; i ++ ) {
		int a , b ; cin >> a >> b ;

		pair <int , int > temp_pair ; 

		temp_pair =  make_pair(a,b)  ; 
		//a.push_back(temp_pair);
		v.push_back (temp_pair) ;

	}

	sort ( v.begin () , v.end() , desSort ) ; 

 	int res = 0 ;


 		for (int i = 0 ; i < v.size() ; i ++ ) {

 			//cout << res << endl;


 			if (v[i].second <= w){
 				int temp = v[i].first * v[i].second ;
 				res+=temp ; 
 				w-= v[i].second ; 


 			}
 			else {

 				int temp = v[i].first * w ;
 				res += temp ;
 				w= 0 ; 
 				break ; 

 			}
 		}


 	cout << res << endl; 


	/*map <int , int > m ;

	for ( int i = 0 ; i < n ; i++ ) {

		int a , b ; cin >> a >> b ; // delicious and weight 

		m[a] = b ;


	}

	sort  ( m ) ; 

	for ( auto i : m ) {
		cout << i.first << " " <<  i.second << endl;  
	} */
	
}

int32_t main(){
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
