#include<stdio.h>
#include<stdlib.h>
#define ll long long

int main(){
    ll a; 
    scanf("%lld", &a);
    ll **arr = NULL;
    arr = (ll**) realloc(arr, a * sizeof(ll*));
    for(ll i = 0; i < a; i++){
        arr[i] = (ll*) malloc(a * sizeof(ll));
        for(ll j = 0; j < a; j++) scanf("%lld", &arr[i][j]);
    }
    
    ll new_val;
    scanf("%lld", &new_val);
    arr = (ll**) realloc(arr, new_val * sizeof(ll*));
    for(ll i = 0; i < new_val; i++){
        arr[i] = (ll*) realloc(arr[i], new_val * sizeof(ll));
        for(ll j = 0; j < new_val; j++){
            scanf("%lld", &arr[i][j]);
            printf("%lld ", arr[i][j]);
        }
        printf("\n");
    }
    
    for(ll i = 0; i < new_val; i++) free(arr[i]);
    free(arr);

    return 0;
}