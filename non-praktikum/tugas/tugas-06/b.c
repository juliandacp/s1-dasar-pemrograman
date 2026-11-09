#include<stdio.h>
#define ll long long

ll sum(ll n){
    if(n == 1) return n;
    else return n + sum(n - 1);
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    printf("%lld\n", sum(n));
    
    return 0;
}