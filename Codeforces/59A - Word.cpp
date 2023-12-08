#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    string word;
    cin>>word;
    int x = word.size();
    int lowerCase = 0;
    REP(i, 0, x){
        if(islower(word[i])){
            lowerCase += 1;
        }
    }
    int upperCase = word.size() - lowerCase;
    if(upperCase > lowerCase){
        REP(i, 0, x){
            char ch = toupper(word[i]);
            cout<<ch;
        }
    }
    else{
        REP(i, 0, x){
            char ch = tolower(word[i]);
            cout<<ch;
        }
    }
}
