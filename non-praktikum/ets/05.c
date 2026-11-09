#include<stdio.h>
#include<stdlib.h>
#define ll long long

int main(){
    ll x1, y1, x2, y2;
    scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
    
    ll sum = 0;
    sum = llabs(x1 - x2) + llabs(y1 - y2);
    
    printf("%lld\n", sum);
    
    return 0;
}