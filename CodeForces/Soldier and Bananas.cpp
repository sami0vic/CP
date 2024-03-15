#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;
using namespace std;

int main(){
    int k, w;
    ll n;
    cin>>k>>n>>w;
    ll result = k*((w*(w+1))/2);
    if(result > n){
        cout<<result - n;
    }
    else{
        cout<<0;
    }
}