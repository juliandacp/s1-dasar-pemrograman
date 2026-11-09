#include<stdio.h>
#define ll long long

ll find_min(ll a[], ll p, ll q){
    if(p == q) return a[p - 1];
    ll res = find_min(a, p + 1, q);
    if(a[p - 1] < res) return a[p - 1];
    else return res;
}

int main(){
    ll n, t;
    scanf("%lld %lld", &n, &t);
    
    ll a[n + 5];
    for(ll i = 0; i < n; i++) scanf("%lld", &a[i]);
    
    ll p[t + 5], q[t + 5];
    for(ll i = 0; i < t; i++) scanf("%lld %lld", &p[i], &q[i]);
    
    for(ll i = 0; i < t; i++) printf("%lld\n", find_min(a, p[i], q[i]));
    
    return 0;
}