#include<stdio.h>
#include<stdlib.h>
#define ll long long

int main(){
    ll num1, num2, diff;
    scanf("%lld %lld", &num1, &num2);
    
    diff = llabs(num1 - num2);
    
    printf("%lld\n", diff);
    
    return 0;
}