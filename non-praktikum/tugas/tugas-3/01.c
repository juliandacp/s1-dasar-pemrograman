#include<stdio.h>
#define ll long long

int main(){
    ll n, total = 0;
    scanf("%lld", &n);
    
    for(ll i = 0; i < n; i++){
        ll x;
        scanf("%lld", &x);
        total += x;
    }
    
    printf("%lld\n", total);
    
    return 0;
}