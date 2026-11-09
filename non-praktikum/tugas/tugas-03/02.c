#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    while(n < 1 || n > 10) scanf("%lld", &n);
    
    printf("%lld\n", n);
    
    return 0;
}