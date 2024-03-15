#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<=b; i++)
using namespace std;

int main(){
    int n, p;
    cin >> n;
    vector<int> f(n+1);
    REP(i, 1, n){
        cin>>p;
        f[p] = i;
    }
    cout<<f[1];
    REP(i, 2, n){
        cout<<" "<<f[i];
    }
}