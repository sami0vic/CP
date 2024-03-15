#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n,p,q;
    int nb_rooms = 0;
    cin>>n;
    REP(i, 0, n){
        cin>>p>>q;
        if(q-p >= 2){
            nb_rooms += 1;
        }
    }
    cout<<nb_rooms;
}