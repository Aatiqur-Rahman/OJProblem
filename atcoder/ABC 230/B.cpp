
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	string str1 ; cin >> str1 ;
	string str2 =  "oxx" ; 


	bool flag = true ; 
	for ( int i = 0 ; i< str1.size() ; i++ ) {
		if (str1[i] == 'o'){

			int j = 0 ; 
			while (i < str1.size() ){


				if (str1[i] == str2[j]){
					
					i++,j++;

					j%=3;

				}
				else {

					flag= false ; 
					break;
				}
			} 
		}

		else{ 
			if (  i > 1  )  {
				flag = false ; 
			}
		}
	}
	cout << (flag ? "Yes" : "No") << '\n' ;
	
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
