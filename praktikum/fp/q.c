#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

ll total_cost = 0;

void crate(ll no, ll from, ll to){
    ll distance = llabs(from - to);
    ll cost = no * distance;
    total_cost += cost;
    printf("Crate %lld, Zone %lld -> Zone %lld (Cost: %lld)\n", no, from, to, cost);
}

void stack(ll crate_count, ll a, ll c, ll b){
    if(crate_count == 0) return;
    if(crate_count == 1){
        crate(crate_count, a, c);
        return;
    }
    stack(crate_count - 1, a, b, c);
    crate(crate_count, a, c);
    stack(crate_count - 1, b, c, a);
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    stack(n, 1, 3, 2);
    printf("%lld\n", total_cost);
    
    return 0;
}