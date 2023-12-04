#include <bits/stdc++.h>
#define REP(i, a , b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    int Anton = 0, Danik = 0;
    string S;
    cin>>n;
    cin>>S;
    REP(i, 0, n){
        if(S[i] == 'A'){
            Anton += 1;
        }
        else{
            Danik += 1;
        }
    }
    if(Anton > Danik){
        cout<<"Anton";
    }
    else if(Anton < Danik){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}