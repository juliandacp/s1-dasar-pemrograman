#include<stdio.h>
#define ll long long

ll quadronacci(ll n, ll a, ll b, ll c, ll d){
    if(n == 1) return a;
    if(n == 2) return b;
    if(n == 3) return c;
    if(n == 4) return d;
    return quadronacci(n - 1, a, b, c, d) + quadronacci(n - 2, a, b, c, d) + quadronacci(n - 3, a, b, c, d) + quadronacci(n - 4, a, b, c, d);
}

int main(){
    ll r, c, a, b, d_val, e_val;
    scanf("%lld %lld %lld %lld %lld %lld", &r, &c, &a, &b, &d_val, &e_val);
    
    ll total = r * c;
    for(ll i = 1; i <= total; i++){
        printf("%lld", quadronacci(i, a, b, d_val, e_val));
        if(i % c == 0) printf("\n");
        else printf(" ");
    }
    
    return 0;
}