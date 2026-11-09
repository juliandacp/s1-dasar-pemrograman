#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    for(ll i = n; i > 0; i--){
        for(ll j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}