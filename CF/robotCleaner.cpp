#include <bits/stdc++.h>
using namespace std;
int main () {
    int t ;cin >> t;while (t--){
        int r,c,r1,c1,r2,c2;
        cin >> r >> c >> r1 >> c1 >> r2 >> c2 ;
        int t_r= r;int t_c=c;
        int counter= 0 ;
        if (r1==r2 || c1==c2){
            cout << counter << endl;
        }
        else {
            int i =5;
            while(i>=2){
                cout << "old origin : " << r << " " << c << endl;
                int t_r1=r1;int t_c1=c1;
                cout << "initial positon : " <<  r1 << " " << c1 << endl;

                if (r1==1){r=t_r;}
                else if (r1==r){r=1;}
                else {r=r;} /**if row or column is in the end position or first position*/
                if (c1==1){c=t_c;}
                else if (c1==c){c=1;}
                else {c=c;}

                cout << "new Origin : " << r<< " " << c << endl;

                int min_r = abs(r-r1);int min_c=abs(c-c1);
                int min_r_c= min(min_r,min_c);
                cout <<"minimum distance : " <<  min_r_c << endl;
                counter+=min_r_c;

                if (min_r<min_c ){
                    r1+=min_r_c;c1+=min_r_c;
                }
                else if (min_r==min_c){
                    r1+=min_r_c;c1+=min_r_c;
                }
                else {
                    r1-=min_r_c;c1+=min_r_c;

                }
                cout << "new position : " << r1 << " " << c1 << endl<<endl;
                if (r2<=r1 && r2>=t_r1 || c2<=c1 && c2>=t_c1) {
                    break;
                }
                i--;

            }
            r=r1-r2;c=c1-c2;
            int m  =max(r,c);
            counter-=m;


        cout << counter <<endl;
        }
    }


    return 0 ;
}
