#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll num = 1;
    for(ll i = 0; i <= n; i++){
        if(i == 0) num = 1;
        else num = num * (n - i + 1) / i;
        
        printf("%lld", num);
        if(i < n) printf(" ");
    }
    printf("\n");
    
    return 0;
}