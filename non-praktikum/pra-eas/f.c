#include<stdio.h>
#define ll long long

ll count_even(ll *arr, ll n){
    ll count = 0;
    for(ll i = 0; i < n; i++) if(*(arr + i) % 2 == 0) count++;
    return count;
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n + 5];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    ll total = count_even(arr, n);
    printf("%lld", total);
    
    return 0;
}