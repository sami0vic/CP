#include<bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int main(){
    int M, N;
    cin>>M>>N;
    int nb_dominos = 0;
    int nb_squares = M*N;
    if(nb_squares%2 == 0){
        nb_dominos = nb_squares / 2;
    }
    else{
        nb_dominos = (nb_squares - 1) / 2;
    }
    cout<<nb_dominos;
}
