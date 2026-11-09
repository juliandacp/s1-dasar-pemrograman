#include<stdio.h>
#define ll long long

int main(){
    ll a, b, c, temp;
    scanf("%lld %lld %lld", &a, &b, &c);

    if(a <= 0 || b <= 0 || c <= 0 || a == b || b == c || c==a) printf("Gomenasai, segitiga tidak dapat dibuat.");
    else{
        if(a < b){temp = a; a = b; b = temp;}
        if(a < c){temp = a; a = c; c = temp;}

        if(a * a == b * b + c * c) printf("Yatta, aku bisa membentuk segitiga!");
        else printf("Gomenasai, segitiga tidak dapat dibuat.");
    }

    return 0;
}