#include<bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    int x = 0;
    cin>>n;
    string operation;
    REP(i, 0, n){
        cin>>operation;
        if(operation == "++X" || operation == "X++"){
            x += 1;        
        }
        if(operation == "--X" || operation == "X--" ){
            x -= 1;        
        }
    }
    cout<<x;
}
