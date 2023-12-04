#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    string s;
    string cap = "";
    cin>>s;
    REP(j, 0, t){
        REP(i, 0, n-1){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i += 1;
            }
        }
    }
    cout<<s;
}