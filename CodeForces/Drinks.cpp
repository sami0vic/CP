#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    int percent[n];
    int somme = 0;
    REP(i, 0, n){
        cin>>percent[i];
    }
    REP(i, 0, n){
        somme += percent[i];
    }
    double average = static_cast<double>(somme) / (n);
    cout << fixed << setprecision(12) << average;
}