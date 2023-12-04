#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n, h;
    cin>>n>>h;
    int arr[n];
    int result = 0;
    REP(i, 0, n){
        cin>>arr[i];
        if(arr[i] > h){
            result += 2;
        }
        else{
            result += 1;
        }
    }
    cout<<result;
}