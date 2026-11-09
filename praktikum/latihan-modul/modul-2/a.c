#include<stdio.h>
#define ll long long

int main(){
    ll a, b, n;
    scanf("%lld %lld %lld", &a, &b, &n);
    
    ll m[a + 5][b + 5];
    for(ll i = 0; i < a; i++){
        for(ll j = 0; j < b; j++) scanf("%lld", &m[i][j]);
    }
    
    n = n % 4;
    if(n < 0) n += 4;
    
    if(n == 0){
        for(ll i = 0; i < a; i++){
            for(ll j = 0; j < b; j++) printf("%lld ", m[i][j]);
            printf("\n");
        }
        return 0;
    }
    
    if(n == 1){
        for(ll j = 0; j < b; j++){
            for(ll i = a - 1; i >= 0; i--) printf("%lld ", m[i][j]);
            printf("\n");
        }
    }
    else if(n == 2){
        for(ll i = a - 1; i >= 0; i--){
            for(ll j = b - 1; j >= 0; j--) printf("%lld ", m[i][j]);
            printf("\n");
        }
    }
    else if(n == 3){
        for(ll j = b - 1; j >= 0; j--){
            for(ll i = 0; i < a; i++) printf("%lld ", m[i][j]);
            printf("\n");
        }
    }
    
    return 0;
}