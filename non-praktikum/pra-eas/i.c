#include<stdio.h>
#define ll long long

void sort(ll arr[], ll n){
    for(ll i = 0; i < n; i++){
        ll key = arr[i];
        ll j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n + 5];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    sort(arr, n);
    
    for(ll i = 0; i < n; i++) printf("%lld ", arr[i]);
    
    printf("\n");
    return 0;
}