#include<stdio.h>
#define ll long long

int main(){
    ll n, m;
    scanf("%lld %lld", &n, &m);
    
    ll arr[n + 5][m + 5];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++) scanf("%lld", &arr[i][j]);
    }
    
    ll k;
    scanf("%lld", &k);
    
    ll find = k - 1;
    ll sum = 0;
    
    for(ll i = 0; i < m; i++) sum += arr[find][i];
    
    printf("%lld\n", sum);
    
    return 0;
}