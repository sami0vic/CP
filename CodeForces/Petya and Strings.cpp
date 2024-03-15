#include<bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string word1, word2;
    string cap1 = "", cap2 = "";
    cin>>word1;
    cin>>word2;
    for(auto x:word1){ 
        cap1 += (char)tolower(x); 
    }
    for(auto x:word2){ 
        cap2 += (char)tolower(x); 
    }
    int i = 0;
    if(cap1 == cap2){
        cout<<0;
    }
    else{
        while(cap1[i] == cap2[i]){
            i++;
        }
        int x = alphabet.find(cap1[i]);
        int y = alphabet.find(cap2[i]);
    
        if(x>y){
            cout<<1;
        }
        if(x<y){
            cout<<-1;
        }
    }

    
}