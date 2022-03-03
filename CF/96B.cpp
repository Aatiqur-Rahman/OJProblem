
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
		for (int i= 0 ;i<=str.size();i++){
			v.push_back('4');
		}
		arr[4]=str.size()+1;
		int s = 0;
		while ( arr[4] != arr[7] ){ // if occurences is not equal means not super lucky 
			if (arr[4]>arr[7]){ // occurences of 4 is greater than 7
				if (v[s]=='4'){ // finding 4 and convert it into 7 
					v[s]='7';
					arr[4]-=1;
					arr[7]+=1;
				}
			}
			s++;
		}
		reverse(v.begin(),v.end());
		for (auto i : v){
			cout << i ;
		}
		cout << endl;
	}
	
	else { // finding the lucky number bigger or equal to n 
			for (int i =0 ; i<str.size() ; i++ ){ 
				if ( str[i] != '4' && str[i] != '7' ){
					if (str[i]-'0' > 7 ){
						break;
					}
					else {
						int temp  = str[i]-'0' ;
						if (temp < 4) {
							str[i]='4';
							arr[4]+=1;
						}
						else if (temp < 7){
							str[i]='7';
							arr[7]+=1;
						}
						else {
							str[i-1]=7;
							str[i]='4';
							arr[4]+=1;

						}

					}
					
				}
				else {
					if (str[i]=='4'){
						arr[4]+=1;
					}
					else {
						arr[7]+=1;
					}
				}
			}
			if ( arr[7] > arr[4] ){
				for (int i = 0 ; i<=str.size()+1;i++){
					v.push_back('4');
				}
				arr[4]=str.size()+2;
				arr[7]=0;
				int s = 0;
				while ( arr[4] != arr[7] ){ // if occurences is not equal means not super lucky 
					if (arr[4]>arr[7]){ // occurences of 4 is greater than 7
						if (v[s]=='4'){ // finding 4 and convert it into 7 
							v[s]='7';
							arr[4]-=1;
							arr[7]+=1;
						}
					}
					s++;
				}
				reverse(v.begin(),v.end());
				for (auto i : v){
					cout << i ;
				}
				cout << endl;

			}
			else {
			int s = str.size()-1;
			while ( arr[4] != arr[7] ){ // if occurences is not equal means not super lucky 
				if (arr[4]>arr[7]){ // occurences of 4 is greater than 7
					if (str[s]=='4'){ // finding 4 and convert it into 7 
						str[s]='7';
						arr[4]-=1;
						arr[7]+=1;
					}
				}
				s--;
			}
			cout << str << endl;
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
