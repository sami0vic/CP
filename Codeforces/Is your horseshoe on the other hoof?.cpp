#include <bits/stdc++.h>
using namespace std;

int main(){
    int s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;
    int result = 0;
    if(s1 == s2 || s1 == s3 || s1 == s4){
        result += 1;
    }
    if(s2 == s3 || s2 == s4){
        result += 1;
    }
    if(s3 == s4){
        result += 1;
    }
    cout<<result;
}