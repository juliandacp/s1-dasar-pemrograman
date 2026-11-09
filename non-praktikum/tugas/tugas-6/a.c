#include<stdio.h>
#define ll long long

ll factorial(ll n){
    if(n == 0) return 1;
    else return n * factorial(n - 1);
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    printf("%lld\n", factorial(n));
    
    return 0;
}