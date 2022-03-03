
#include <bits/stdc++.h>
#define endl '\n' 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n;

	stack < pair < int , int > > st ;

	int s = 0 ; // the size of stack 
				// since we replace the value 
				// original size of stack is decreased 


	for ( int i = 0 ; i < n ; i++ ){

		int data ; cin >> data ; 


		if  ( st.empty () ) {

			st.push ( make_pair ( data , 1 )  ) ; 
			++s ; // increase size 
		} 
		else {
			pair <int ,int > temp ;

			temp = st.top () ; 
 
			if ( data ==  temp.first ) { // replace the stack top value 
				st.pop () ; 
				
				int t = temp.second ; 

				st.push( make_pair ( data , t+1 ) ) ; 
				++s; 

				if ( t+1 == data ) {

					st.pop () ;

					s -= data  ; // decreasing size of stack data times    
				}


			}
			else {
				st.push ( make_pair ( data , 1 ) ) ; // insert new value 
				++s ; // increase size 
			}
		}

		cout << s << endl ; 

		/*if  ( v.size() == 1 ) {
			temp  =  data ; 
			cnt = 1 ; 
			idx =  v.size() - 1  ; 
		}
		else {
			if ( temp == data ){

				++ cnt  ; 
				if (cnt == data ) {
					v.erase ( v.begin() + idx  , v.begin() + v.size() ) ; 
					idx = v.size() -1  ; 
					temp =  v[idx] ; 
					cnt  = 1 ; 
				}

			}
			else {

				temp  =  data ; 
				cnt = 1 ; 
				idx =  v.size()-1 ; 

			}
		}
		/*int j = v.size()-1 ; 
		int t_data = data ; 

		while ( data > 0 and j >= 0 ) {

			if ( v[j] == t_data ) {

				data -- ;
				j-- ; 

			}

			else break ; 

		}

		j += 1 ;

		if ( data == 0 ) {
			v.erase ( v.begin()+j , v.begin() + v.size() ) ; 
		}*/


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
