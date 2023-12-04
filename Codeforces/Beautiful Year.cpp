#include <bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin>>year;
    while(true){
        year += 1;
        int st = year/1000;
        int nd = year/100 % 10;
        int tr = year/10 % 10;
        int th = year % 10;

        if(st != nd && st != tr && st != th && nd != tr && nd != th && tr != th){
            break;
        }
    }
    cout<<year;
}