#include<stdio.h>
#include<stdlib.h>
#define ll long long

void sort(ll arr[], ll n, ll x){
    for(ll i = 0; i < n - 1; i++){
        for(ll j = 0; j < n - i - 1; j++){
            ll d1 = llabs(arr[j] - x);
            ll d2 = llabs(arr[j + 1] - x);
            ll cek = 0;
            if(d1 > d2) cek = 1;
            else if(d1 == d2 && arr[j] > arr[j + 1]) cek = 1;
            if(cek){
                ll temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    ll n;
    ll x;
    scanf("%lld %lld", &n, &x);
    
    ll arr[n];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    sort(arr, n, x);
    
    for(ll i = 0; i < n; i++){
        printf("%lld", arr[i]);
        if(i != n - 1) printf(" ");
    }
    printf("\n");
    
    return 0;
}