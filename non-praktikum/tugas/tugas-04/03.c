#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n + 1];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    
    ll total_unique = 0;
    for(ll i = 0; i < n; i++){
        ll is_unique = 1;
        for(ll j = 0; j < n; j++){
            if(i != j && arr[i] == arr[j]){
                is_unique = 0;
                break;
            }
        }
        if(is_unique){
            total_unique++;
            printf("%lld ", arr[i]);
        }
    }
    
    if(total_unique == 0) printf("-\n");
    else printf("\n");
    
    return 0;
}