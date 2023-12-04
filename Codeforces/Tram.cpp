#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000], b[1000];
    int arr[n];
    fill(arr, arr + n, 0);
    int max = 0;
    int max_tram = 0;
    REP(i, 0, n){
        cin>>a[i]>>b[i];
        max_tram += b[i] - a[i];
        arr[i] += max_tram;
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max;
}