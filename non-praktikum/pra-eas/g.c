#include<stdio.h>
#define ll long long

ll sort(ll arr[], ll n){
    ll total = 0;
    for(ll i = 0; i < n - 1; i++){
        for(ll j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                ll temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                total++;
            }
        }
    }
    return total;
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n + 5];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    ll total = sort(arr, n);
    
    for(ll i = 0; i < n; i++) printf("%lld ", arr[i]);
    
    printf("\n");
    printf("%lld\n", total);
    
    return 0;
}