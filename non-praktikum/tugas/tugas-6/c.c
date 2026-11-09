#include<stdio.h>
#define ll long long

ll fibonacci(ll n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    printf("%lld\n", fibonacci(n));
    
    return 0;
}