#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll matrix[n + 5][n + 5];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++) scanf("%lld", &matrix[i][j]);
    }
    
    for(ll i = 0; i < n; i++) printf("%lld ", matrix[i][i]);
    printf("\n");
    
    return 0;
}