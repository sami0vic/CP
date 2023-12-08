#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int n;
    int cap = 0;
    cin >> n;
    int A[3];
    REP(i, 0, n){
        REP(j, 0, 3){
            cin>> A[j];
        }
        if(A[0] == 1 && A[1] == 1 || A[1] == 1 && A[2] == 1|| A[0] == 1 && A[2] == 1){
            cap += 1;
        }
    }
    cout << cap << endl;
}
