#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int number, k;
    cin>>number>>k;
    REP(i, 0, k){
        string numberstr = to_string(number);
        char last_digit = numberstr.back();
        if(last_digit == '0'){
            number /= 10;
        }
        else{
            number -= 1;
        }
    }
    cout<<number;
}