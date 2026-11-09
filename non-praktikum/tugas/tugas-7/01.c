#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    if(n >= 2 && n % 2 == 0){
        ll l = n / 2;
        ll p = n * 2;
        
        for(ll i = 0; i < l; i++){
            for(ll j = 0; j < p; j++) printf("#");
            printf("\n");
        }
        
        for(ll i = 0; i < l; i++){
            for(ll j = 0; j < p; j++) printf(".");
            printf("\n");
        }
    }
    else printf("#\n");
    
    return 0;
}