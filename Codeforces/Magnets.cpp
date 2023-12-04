#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    int magnet[n];
    int groupes = 1;
    REP(i, 0, n){
        cin>>magnet[i];
    }
    REP(i, 0, n-1){
        if(magnet[i] != magnet[i+1]){
            groupes += 1;
        }
    }
    cout<<groupes;
}