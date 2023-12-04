#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;
using namespace std;

int main(){
    string number;
    cin>>number;
    ll n = number.size();
    string number47 = "";
    size_t found4 = number.find('4');
    size_t found7 = number.find('7');
    if(found4 != string::npos || found7 != string::npos){
        REP(i, 0, n){
            if(number[i] == '4' || number[i] == '7'){
                number47 += number[i];
            }
        }
    }
    ll size_number47 = number47.size();
    if(size_number47 == 4 || size_number47 == 7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}