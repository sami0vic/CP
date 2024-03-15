#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    string S;
    set<char> X;
    getline(cin,S);
    REP(i, 0, S.size()){
        if(S[i] >= 'a' && S[i] <= 'z'){
            X.insert(S[i]);
        }
    }
    cout<<X.size();
}