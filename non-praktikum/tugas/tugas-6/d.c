#include<stdio.h>
#define ll long long

ll max(ll arr[], ll n){
    if(n == 1) return arr[0];
    ll temp = max(arr + 1, n - 1);
    if(arr[0] > temp) return arr[0];
    else return temp;
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[1005];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    printf("%lld\n", max(arr, n));
    
    return 0;
}