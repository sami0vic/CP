#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n == 1){
        cout<<"I hate it";
    }
    else if(n%2 == 0){
        int t = n/2;
        REP(i, 0, t-1){
            cout<<"I hate that I love that ";
        }
        cout<<"I hate that I love it";
    }
    else{
        int t = (n-1)/2;
        REP(i, 0, t){
            cout<<"I hate that I love that ";
        }
        cout<<"I hate it";
    }
}