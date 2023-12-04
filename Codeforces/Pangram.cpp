#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    string text;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string cap =      "00000000000000000000000000";
    cin>>n;
    cin>>text;
    if(n<26){
        cout<<"NO";
    }
    else{
        REP(i, 0, n){
            text[i] = tolower(text[i]);
            int x = alphabet.find(text[i]);
            size_t found4 = cap.find(text[i]);
            if(found4 == string::npos){
                cap[x] = text[i];
            }
        }
        sort(cap.begin(), cap.end());
        if(cap == alphabet){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}