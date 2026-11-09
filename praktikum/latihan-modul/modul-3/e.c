#include<stdio.h>
#define ll long long

ll memo[1005];

ll sequence(ll n){
    if(memo[n] != -1) return memo[n];
    if(n == 0) return memo[0] = 0;
    if(n == 1) return memo[1] = 1;
    if(n == 2) return memo[2] = 2;
    return memo[n] = (sequence(n - 1) + sequence(n - 2) + sequence(n - 3)) % 100;
}

int main(){
    ll n;
    scanf("%lld", &n);
    for(ll i = 0; i <= n; i++) memo[i] = -1;
    for(ll i = n; i >= 0; i--) printf("%lld ", sequence(i));
    printf("\n");
    
    return 0;
}