#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n + 1];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    
    ll x, total = 0;
    scanf("%lld", &x);
    
    for(ll i = 0; i < n; i++){
        if(arr[i] == x) total += 1;
    }
    
    printf("%lld\n", total);
    
    return 0;
}