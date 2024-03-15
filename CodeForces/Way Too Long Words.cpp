#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    string word;
    REP(i, 0, n){
        cin >> word;
        if(word.length() > 10){
            cout<<word[0]<<word.length() - 2<<word.back()<<"\n";
        }
        else{
            cout<<word<<"\n";
        }
    }
}