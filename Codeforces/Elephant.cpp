#include <bits/stdc++.h>
using namespace std;

int main(){
    int position;
    cin>>position;
    int cap = 0;
    int steps = 0;
    while(cap<position){
        if(cap+5 <= position){
            cap += 5;
            steps += 1;
        }
        else if(cap+4 <= position){
            cap += 4;
            steps += 1;
        }
        else if(cap+3 <= position){
            cap += 3;
            steps += 1;
        }
        else if(cap+2 <= position){
            cap += 2;
            steps += 1;
        }
        else if(cap+1 <= position){
            cap += 1;
            steps += 1;
        }
    }
    cout<<steps;
}