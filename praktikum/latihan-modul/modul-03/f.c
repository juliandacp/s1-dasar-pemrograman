#include<stdio.h>
#define ll long long

unsigned long long viktorial(ll n, ll v){
    if(n <= 0) return 1;
    else return n * viktorial(n - v, v);
}

int main(){
    ll t;
    scanf("%lld", &t);
    ll n[t + 5], v[t + 5];
    for(ll i = 0; i < t; i++) scanf("%lld %lld", &n[i], &v[i]);
    for(ll i = 0; i < t; i++) printf("%lld\n", viktorial(n[i], v[i]));
    
    return 0;
}