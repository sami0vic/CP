#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    int freind[n];
    int result[n];
    REP(i, 0, n){
        cin>>freind[i];
    }
    if(n<4){
        REP(i, 0, n-1){
            cout<<freind[i]<<" ";
        }
        cout<<freind[n];
    }
    else{
        REP(i, 0, n){
            int cap = freind[i];
            result[i] = freind[cap];
        }
        REP(i, 0, n-1){
            cout<<result[i]<<" ";
        }
        cout<<result[n];
    }
}