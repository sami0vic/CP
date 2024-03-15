#include<bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<=b; i++)
using namespace std;

int main(){
    int n,k;
    int adv_round = 0;
    cin>>n>>k;
    int scores[n];
    REP(i, 1, n){
        cin>>scores[i];
    }
    REP(i, 1, n){
        if(scores[i] == 0){
            adv_round += 0;
        }
        else if(scores[i] >= scores[k]){
            adv_round += 1;
        }
    }
    cout<<adv_round;
}