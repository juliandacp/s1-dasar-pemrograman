#include<stdio.h>
#define ll long long

ll find_left(ll arr[], ll n, ll x){
    ll low = 0, high = n - 1, result = -1;
    while(low <= high){
        ll mid = (low + high) / 2;
        if(arr[mid] == x){
            result = mid;
            high = mid - 1;
        } else if(x < arr[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return result;
}

ll find_right(ll arr[], ll n, ll x){
    ll low = 0, high = n - 1, result = -1;
    while(low <= high){
        ll mid = (low + high) / 2;
        if(arr[mid] == x){
            result = mid;
            low = mid + 1;
        } else if(x < arr[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return result;
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    ll x;
    scanf("%lld", &x);
    
    ll left = find_left(arr, n, x);
    ll right = find_right(arr, n, x);
    
    printf("%lld\n", right - left + 1);
    
    return 0;
}