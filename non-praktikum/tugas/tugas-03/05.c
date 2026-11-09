#include<stdio.h>
#define ll long long

int main(){
    ll n, total = 0;
    scanf("%lld", &n);
    
    while(n != 0){
        total += n % 10;
        n /= 10;
    }
    
    printf("%lld\n", total);
    
    return 0;
}