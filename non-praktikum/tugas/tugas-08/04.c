#include<stdio.h>
#define ll long long

ll search_first(ll arr[], ll low, ll high, ll x){
    if(low > high) return -1;
    ll mid = (low + high) / 2;
    if(arr[mid] == x){
        if(mid == 0 || arr[mid - 1] != x) return mid;
        else return search_first(arr, low, mid - 1, x);
    }
    else if(x < arr[mid]) return search_first(arr, low, mid - 1, x);
    else return search_first(arr, mid + 1, high, x);
    return -1;
}

ll search_last(ll arr[], ll low, ll high, ll x, ll n){
    if(low > high) return -1;
    ll mid = (low + high) / 2;
    if(arr[mid] == x){
        if(mid == n - 1 || arr[mid + 1] != x) return mid;
        else return search_last(arr, mid + 1, high, x, n);
    }
    else if(x < arr[mid]) return search_last(arr, low, mid - 1, x, n);
    else return search_last(arr, mid + 1, high, x, n);
    return -1;
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    ll x;
    scanf("%lld", &x);
    
    printf("%lld %lld\n", search_first(arr, 0, n - 1, x), search_last(arr, 0, n - 1, x, n));
    
    return 0;
}