#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;
using namespace std;

int main(){
    string nb1, nb2;
    cin>>nb1;
    cin>>nb2;
    string result = "";
    ll n = nb1.size();
    REP(i, 0, n){
        if(nb1[i] == nb2[i]){
            result += "0";
        }
        else{
            result += "1";
        }
    }
    cout<<result;
}