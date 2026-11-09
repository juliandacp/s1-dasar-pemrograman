#include<stdio.h>
#define ll long long

ll deret(ll n){
    if(n == 1) return 1;
    return n + deret(n - 1);
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    printf("%lld\n", deret(n));
    
    return 0;
}