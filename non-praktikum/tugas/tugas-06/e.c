#include<stdio.h>
#define ll long long

ll deret(ll n){
    if(n == 1) return n;
    else return n + deret(n - 1);
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll res = deret(n);
    printf("%lld\n", res);
    
    return 0;
}