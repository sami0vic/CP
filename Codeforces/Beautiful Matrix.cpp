#include<bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int x = 1, y = 1;
    int result;
    int arr[5][5] = {
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0 }
	} ;
    REP(i, 0, 5){
        REP(j, 0, 5){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    int part1 = 0, part2 = 0;
    if(x>2){
        part1 = (x-2);
    }
    else if(x<2){
        part1 = (2-x);
    }
    if(y>2){
        part2 = (y-2);
    }
    else if(y<2){
        part2 = (2-y);
    }
    
    result = part1 + part2;
    cout<<result;
}