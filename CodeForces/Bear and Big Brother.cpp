#include <bits/stdc++.h>
using namespace std;

int main(){
    int LimakWeight, BobWeight;
    cin>>LimakWeight>>BobWeight;
    int years = 0;
    while(LimakWeight <= BobWeight){
        LimakWeight *= 3;
        BobWeight *= 2;
        years += 1;
    }
    cout<<years;
}