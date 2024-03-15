#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;
using namespace std;

int main() {
    int n, x, y;
    cin >> n;
    cin >> x;
    int X[x];
    unordered_set<int> uniqueNumbers;
    REP(i, 0, x) {
        cin >> X[i];
        uniqueNumbers.insert(X[i]);
    }
    cin >> y;
    int Y[y];
    REP(i, 0, y) {
        cin >> Y[i];
        uniqueNumbers.insert(Y[i]);
    }

    int k = uniqueNumbers.size();

    if(k<n){
        cout<<"Oh, my keyboard!";
    }
    else{
        cout<<"I become the guy.";
    }
}
