#include<stdio.h>
#define ll long long

ll fibonacci(ll n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    ll n;
    scanf("%lld", &n);
    printf("%lld\n", fibonacci(n));
    
    return 0;
}