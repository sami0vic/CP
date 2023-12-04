#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i+=2)
#define REP1(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    string formula;
    cin>>formula;
    int x= formula.size();
    int n = ((x-1)/2) + 1;
    int arr1[51] = {0};
    if(x == 1){
        cout<<formula;
    }
    else{
        int j = 0;
        REP1(i, 0, n){
            if(j<=x){
                arr1[i] = formula[j] - '0';
            }
            else{
                break;
            }
            j += 2;
        }
        sort(arr1, arr1+n);
        REP1(i, 0, n-1){
            cout<< arr1[i]<< "+";
        }
        cout<< arr1[n - 1];
    }
    
}