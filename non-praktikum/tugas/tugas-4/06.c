#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll matrix[n + 1][n + 1];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            scanf("%lld", &matrix[i][j]);
        }
    }
    
    ll is_dominant = 1;
    for(ll i = 0; i < n; i++){
        ll diagonal = matrix[i][i];
        ll sum = 0;
        for(ll j = 0; j < n; j++){
            if(i != j) sum += matrix[i][j];
        }
        if(diagonal <= sum){
            is_dominant = 0;
            break;
        }
    }
    
    if(is_dominant) printf("YA\n");
    else printf("TIDAK\n");
    
    return 0;
}