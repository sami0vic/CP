#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    string username;
    cin>>username;
    int numberOfLetters = username.size();
    int destinct_letters = username.size();
    string cap = "";
    REP(i, 0, numberOfLetters){
        size_t found = cap.find(username[i]);
        if(found != string::npos){
            destinct_letters -= 1;
        }
        cap += username[i];
    }
    if(destinct_letters % 2 == 1){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}