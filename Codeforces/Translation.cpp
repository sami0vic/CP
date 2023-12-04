#include <bits/stdc++.h>
#define REP(i , a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    string s1 = s;
    reverse(s1.begin(), s1.end());
    if(s1 == t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}