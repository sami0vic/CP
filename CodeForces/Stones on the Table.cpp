#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b;i++)
using namespace std;

int main(){
    int number;
    cin>>number;
    string stones;
    cin>>stones;
    int result=0;
    REP(i, 0, number-1){
        if(stones[i] == stones[i+1]){
                result += 1;
        }
    }
    cout<<result;
}