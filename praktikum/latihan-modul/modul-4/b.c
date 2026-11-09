#include<stdio.h>
#define ll long long

void update(ll *a, ll *b){
    ll add = *a + *b;
    ll subtract = *a - *b;
    printf("%lld %lld\n", add, subtract);
}

int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);
    update(&a, &b);
    return 0;
}