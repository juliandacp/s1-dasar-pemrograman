#include<stdio.h>
#define ll long long

ll search(ll arr[], ll low, ll high, ll x, ll res){
    if(low > high) return res;
    ll mid = (low + high) / 2;
    if(arr[mid] > x) return search(arr, low, mid - 1, x, arr[mid]);
    else return search(arr, mid + 1, high, x, res);
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n + 5];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    ll x;
    scanf("%lld", &x);
    
    printf("%lld\n", search(arr, 0, n - 1, x, -1));
    
    return 0;
}