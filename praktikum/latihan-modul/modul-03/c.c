#include<stdio.h>
#define ll long long

ll sequence(ll n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return sequence(n - 1) + sequence(n - 2);
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll result = sequence(n);
    if(result % 2 == 0) result *= 321;
    else result *= 123;
    
    printf("%lld\n", result);
    if(result % 5 == 0) printf("AKU TERJEBAK DALAM DUNIAKU\n");
    else printf("TERIMAKASIH LUPUT TELAH MENJADI PASANGANKU\n");
    
    return 0;
}