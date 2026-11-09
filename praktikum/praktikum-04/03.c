#include<stdio.h>
#include<stdlib.h>
#define ll long long

void magician(ll *a1, ll *a2, ll *x, ll *result){
    if(*x == 1) *result = *a1;
    else if(*x == 2) *result = *a2;
    else{
        ll previous = *a1;
        ll current = *a2;
        ll sum;

        for(ll i = 3; i <= *x; i++){
            sum = previous + current;
            previous = current;
            current = sum;
        }

        *result = current;
    }
}

int main(){
    ll t;
    scanf("%lld", &t);

    ll a1, a2, x;
    for(ll i = 0; i < t; i++){
        scanf("%lld %lld %lld", &a1, &a2, &x);

        ll result;
        magician(&a1, &a2, &x, &result);
        printf("%lld\n", result);
    }

    return 0;
}