#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);

    for(ll i = n; i >= 1; i--){
        for(ll space = 1; space <= n - i; space++) printf(" ");
        for(ll j = 1; j <= i; j++) printf("%lld", j);
        for(ll j = i - 1; j >= 1; j--) printf("%lld", j);
        printf("\n");
    }

    return 0;
}