#include<stdio.h>
#define ll long long

int main(){
    ll a, b, total = 0;
    scanf("%lld %lld", &a, &b);
    
    a += 1;
    for(ll i = a; i < b; i++){
        if(i % 2 == 1) total += i;
    }
    
    printf("%lld\n", total);
    
    return 0;
}