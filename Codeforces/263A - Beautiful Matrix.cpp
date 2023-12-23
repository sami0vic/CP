#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int arr1[5][5];
    int x, y;
    REP(i, 0, 5){
        REP(j, 0, 5){
            cin>>arr1[i][j];
            if(arr1[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    int result = 0;
    if(x<=2 && y<=2){
        result = (2-x) + (2-y);
    }
    if(x>=2 && y>=2){
        result = (x-2) + (y-2);
    }
    if(x>=2 && y<=2){
        result = (x-2) + (2-y);
    }
    if(x<=2 && y>=2){
        result = (2-x) + (y-2);
    }
    cout<<result;
}
