#include<stdio.h>
#define ll long long

ll collatz(ll n){
    if(n <= 1) return 0;
    if(n % 2 == 0) return 1 + collatz(n / 2);
    else return 1 + collatz(3 * n + 1);
}

int main(){
    ll n;
    scanf("%lld", &n);
    printf("%lld\n", collatz(n));
    
    return 0;
}