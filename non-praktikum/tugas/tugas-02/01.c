#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    if(n == 0) printf("Nol\n");
    else if(n > 0) printf("Positif\n");
    else printf("Negatif\n");
    
    return 0;
}