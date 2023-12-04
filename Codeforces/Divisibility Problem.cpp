#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    REP(i, 0, n){
        int a, b;
        cin>>a>>b;
        if(a%b == 0){
            cout<<0<<"\n";
        }
        else{
            int result = b - (a%b);
            cout<<result<<"\n";
        }
    }
}