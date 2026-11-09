#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    ll even = 0, odd = 0;
    for(ll i = 0; i < n; i++){
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    
    printf("%lld\n", even);
    printf("%lld\n", odd);
    
    return 0;
}