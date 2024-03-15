#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    int Max = 0;
    int x_max = -1;
    int Min = 100;
    int x_min = 101;
    REP(i, 0, n){
        cin>>A[i];
        if(A[i] > Max){
            Max = A[i];
            x_max = i;
        }
        else if(A[i] == Max){
            x_max = min(i, x_max);
        }

        if(A[i] < Min){
            Min = A[i];
            x_min = i;
        }
        else if(A[i] == Min){
            x_min = max(i, x_min);
        }
    }
    if(x_max > x_min){
        int result = x_max + n - 2 - x_min;
        cout<<result;
    }
    else{
        int result = x_max + n - 1 - x_min;
        cout<<result;
    }
}

