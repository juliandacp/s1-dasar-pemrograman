#include<stdio.h>
#define ll long long

void sort(ll arr[], ll n){
    for(ll i = 0; i < n - 1; i++){
        for(ll j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                ll temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n + 5];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    sort(arr, n);
    
    for(ll i = 0; i < n; i++){
        printf("%lld", arr[i]);
        if(i != n - 1) printf(" ");
    }
    printf("\n");
    
    return 0;
}