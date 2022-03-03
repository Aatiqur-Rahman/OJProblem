#include <bits/stdc++.h>

using namespace std;
int arr[10] = {0} ; // for counting occurences of 4 and 7 
vector <char> v;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	string str; // n 
	cin >> str ; 
	v.clear();
	if (str.size()&1){ // if size is odd there is no super lucky number 
		
	}
	
	else { // finding the lucky number bigger or equal to n 

			vector < int > sl  ; 

			for (int i =str.size()-1 ; i >= 0  ; i--  ){ 


				int temp  = str[i]-'0' ;

				if (temp < 4) {
					sl.push_back ( 4 );

				}
				else if (temp < 7){
					sl.push_back ( 7 );

				}
				else {

					int j = i-1 ; 


					while ( temp >= 7 ) {

						sl.push_back (4);
						temp = str [j] - '0' ;
						
						j-- ; 
					}

					if ( sl[sl.size()-1] == 4 && j== -1 ) {

						sl.push_back (4);
						sl.push_back (4);

					} 
					else {

						sl.push_back (7);

					}

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