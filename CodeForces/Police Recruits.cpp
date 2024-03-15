#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    int cap = 0;
    int pos = 0;
    int A[n];
    REP(i, 0, n){
        cin>>A[i];
        if(A[i]>0){
            pos += A[i];
        }
        if(A[i]<0){
            if(pos == 0){
                cap += 1;
            }
            else if(pos>0){
                pos -= 1;
            }
        }
    }
    cout<<cap;
}