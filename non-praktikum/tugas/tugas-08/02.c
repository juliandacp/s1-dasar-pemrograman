#include<stdio.h>
#define ll long long

ll search(ll arr[], ll low, ll high, ll x){
    if(low > high) return -1;
    ll mid = (low + high) / 2;
    if(arr[mid] == x) return mid;
    else if(x < arr[mid]) return search(arr, low, mid - 1, x);
    else return search(arr, mid + 1, high, x);
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n + 5];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    ll x;
    scanf("%lld", &x);
    
    printf("%lld\n", search(arr, 0, n - 1, x));
    
    return 0;
}