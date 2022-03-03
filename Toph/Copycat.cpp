//Better Passwords
#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    for (int i=0;i<str.size();i++){
        if(i==0) {
            if(str[i] > 'a' && str[i] < 'z') {
                printf("%c",str[i] + 'A'-'a');
            }
        }
        else {
            if (str[i]=='s'){
                cout << "$" ;
            }
            else if(str[i]=='i'){cout << "!";}
            else if (str[i]=='o'){cout << "()";}
            else {cout << str[i] ;}
        }
    }
    cout <<"." << endl;
    return 0;
}

// Decent Arrays
/*#include <iostream>
#include <vector>

using namespace std;

vector <int> v;

int main() {
    bool f=0;
    int n;
    cin  >> n;
    for (int i=0;i<n;i++){
        int data;
        cin >> data;
        v.push_back(data);
        if (i>1 && f==0){
            if (v[i-1]>data)f=1;
        }
    }
    if (f==0){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}

// Fibonacci Numbers

/*#include <iostream>

using namespace std;

int fibo(int n){
    if (n==1)return 1;
    if (n==2)return 1;
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    int res=fibo(n);
    cout << res << endl;
}

//Byang's Additions

/*#include <bits/stdc++.h>

using namespace std ;

vector <int> v1,v2;

int main(){
    bool f=0;
    string str1,str2;
    cin >> str1 >> str2;
    for (int i=str1.size()-1,j=str2.size()-1;i>=0 || j>=0;i--,j--){
        int data1,data2;
        data1=str1[i]-'0';
        data2=str2[j]-'0';
        v1.push_back(data1);
        v2.push_back(data2);
    }
    for (int i=0;i<v1.size();i++) {
        if ((v1[i]+v2[i])>9){
            f=1;
            break;
        }
    }
    if (f==1)cout << "Yes" << endl;
    else {
        cout << "No" << endl;
    }
    return 0;
}

// Is prime

/*#include <bits/stdc++.h>

using namespace std;

int main(){
    bool f=0;
    int n;
    cin >> n;
    for (int i=sqrt(n);i>=2;i--){
        if (n%i==0) {
            f=1;
            break;
        }
    }
    if (f==1) cout << "No" << endl;
    else {cout << "Yes" << endl;}
    return 0;
}





//Divisors
/*#include <bits/stdc++.h>

using namespace std;

set <int> s;

int main(){
    int n;
    cin >> n;
    s.insert(n);
    for (int i=sqrt(n);i>=1;i--){
        if (n%i==0){
            int res=n/i;
            s.insert(res);
            s.insert(i);
        }
    }
    for (set<int>::iterator it=s.begin();it!=s.end();it++) {
        cout << *it << endl;
    }
    return 0;
}

// Is Palindrom
/*#include <iostream>

using namespace std;

int main () {
    string str;
    cin >> str;
    bool f=0;
    for (int i=0,j=str.size()-1;i<j;i++,j--) {
        if (str[i]!=str[j]){
            f=1;break;
        }
    }
    if (f==1){
        cout << "No" << endl;
    }
    else {cout << "Yes" << endl;}
    return 0;
}


//Math and Watermelons
/*#include <iostream>

using namespace std;

int main () {
    int m,n;
    cin >> m >> n;
    cout << m%n << endl;
    return 0;
}

//Running Average Again
#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    double sum=0.0;
    for (int i=1;i<=n;i++) {
        int data;
        cin >> data;
        sum+=data;
        cout << sum/i << endl;
    }
    return 0;
}*/
