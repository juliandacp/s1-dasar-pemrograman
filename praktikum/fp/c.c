#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll chi(ll a, ll b, ll *x, ll *y){
    if(b == 0){
        *x = 1;
        *y = 0;
        return a;
    }
    ll x_new, y_new;
    ll fpb = chi(b, a % b, &x_new, &y_new);
    *x = y_new;
    *y = x_new - (a / b) * y_new;
    return fpb;
}

ll compute_energy(ll cap_fill, ll cap_hold, ll target){
    ll fpb = gcd(cap_fill, cap_hold);
    ll a = cap_fill / fpb;
    ll b = cap_hold / fpb;
    ll c = target / fpb;
    ll x, y;
    chi(a, b, &x, &y);
    x = (x % b + b) % b;
    ll mini = (x * c) % b;
    if(mini == 0) mini = b;
    ll total_chi = mini * cap_fill;
    ll empty_count = (total_chi - target) / cap_hold;
    ll energy = 2 * mini + 2 * empty_count;
    if(target <= cap_fill){
        ll alternative = energy - 2;
        if(alternative > 0) return alternative;
    }
    return energy;
}

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll a, b, x;
        scanf("%lld %lld %lld", &a, &b, &x);
        
        if(x == 0){ printf("0\n"); continue; }
        if(x == a || x == b){ printf("1\n"); continue; }
        if((x > a && x > b) || (x % gcd(a, b) != 0)){ printf("IMPOSSIBLE\n"); continue; }
        
        ll strategy1 = compute_energy(a, b, x);
        ll strategy2 = compute_energy(b, a, x);
        
        if(strategy1 < strategy2) printf("%lld\n", strategy1);
        else printf("%lld\n", strategy2);
    }
    
    return 0;
}