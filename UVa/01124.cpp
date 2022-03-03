
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

void solve(){

}

int main(){
	//fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
#endif

	//int c =1;
	//cin >> c ;

    char str[81] ;
    char letter [26] = "abcdefghijklmnopqrstuvwxyz";

	while ( scanf("%[^\n]%*c",&str) != EOF ){

        for (int i = 0 ;i < strlen (str) ; i++ ) {

        }

        cout << "The string " << "'" << str << "'" <<  " contains " << strlen(str) << " palindromes." << endl ;
        //The string 'boy' contains 3 palindromes.
	}

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

	return 0;
}
