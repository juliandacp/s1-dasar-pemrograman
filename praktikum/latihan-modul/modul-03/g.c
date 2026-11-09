#include<stdio.h>
#define ll long long

ll combine(ll n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    return combine(n - 1) + combine(n - 2);
}

int main(){
    ll n;
    scanf("%lld", &n);
    printf("%lld\n", combine(n));
    
    return 0;
}