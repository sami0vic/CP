#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    int count = d;
    REP(i, 1, d+1){
        if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0)){
            count--;
        }
    }
    cout<<count;
}