#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n, a;
    cin>>n;
    string cap = "";
    REP(i, 0, n){
        cin>>a;
        cap += to_string(a);
    }
    size_t found1 = cap.find("1");
    if(found1 != string::npos){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
}