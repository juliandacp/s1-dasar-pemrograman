#include<stdio.h>
#define ll long long

ll search(ll arr[], ll n, ll x){
    for(ll i = 0; i < n; i++){
        if(arr[i] == x) return i;
    }
    return -1;
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n + 5];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    ll x;
    scanf("%lld", &x);
    
    printf("%lld\n", search(arr, n, x));
    
    return 0;
}