#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n + 1];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    
    ll t;
    ll total = 0;
    scanf("%lld", &t);
    
    for(ll i = 0; i < n; i++){
        for(ll j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == t) total++;
        }
    }
    
    printf("%lld\n", total);
    
    return 0;
}