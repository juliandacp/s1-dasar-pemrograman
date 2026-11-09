#include<stdio.h>
#define ll long long

int main(){
    ll matrix[5][5], transpose[5][5];
    
    for(ll i = 0; i < 3; i++){
        for(ll j = 0; j < 2; j++) scanf("%lld", &matrix[i][j]);
    }
    
    for(ll i = 0; i < 3; i++){
        for(ll j = 0; j < 2; j++) transpose[j][i] = matrix[i][j];
    }
    
    for(ll i = 0; i < 2; i++){
        for(ll j = 0; j < 3; j++) printf("%lld ", transpose[i][j]);
        printf("\n");
    }
    
    return 0;
}