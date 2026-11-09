#include<stdio.h>
#define ll long long

void pw(ll n, ll res){
    if(res == 0) return;
    pw(n, res - 1);
    if(res == n) for(ll i = 0; i < res; i++) printf("z");
    else if(res % 2 == 1) for(ll i = 0; i < res; i++) printf("d");
    else for(ll i = 0; i < res; i++) printf("e");
    printf("\n");
    pw(n, res - 1);
}

int main(){
    ll n;
    scanf("%lld", &n);
    pw(n, n);
    
    return 0;
}