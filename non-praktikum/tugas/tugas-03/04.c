#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    for(ll i = 1; i <= n; i++){
        if(n % i == 0) printf("%lld\n", i);
    }
    
    return 0;
}