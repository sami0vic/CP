#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n, m, a, number;
    cin>>n>>m>>a;
    number = ((n + a - 1)) / a * ((m + a - 1) / a);
    cout<<number;
}