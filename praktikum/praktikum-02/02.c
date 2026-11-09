#include<stdio.h>
#include<string.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);

    ll matrix[101][101];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            scanf("%lld", &matrix[i][j]);
        }
    }

    char s[101];
    unsigned ll rotation;
    unsigned ll N = 0;

    while(1){
        scanf("%s", s);
        if(strcmp(s, "quit") != 0){
            scanf("%llu", &rotation);
            N += rotation;
        }else break;
    }

    N %= 4;

    if(N == 0){
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++) printf("%lld ", matrix[i][j]);
            printf("\n");
        }
    }else if(N == 1){
        for(ll j = 0; j < n; j++){
            for(ll i = n - 1; i >= 0; i--) printf("%lld ", matrix[i][j]);
            printf("\n");
        }
    }else if(N == 2){
        for(ll i = n - 1; i >= 0; i--){
            for(ll j = n - 1; j >= 0; j--) printf("%lld ", matrix[i][j]);
            printf("\n");
        }
    }else if(N == 3){
        for(ll j = n - 1; j >= 0; j--){
            for(ll i = 0; i < n; i++) printf("%lld ", matrix[i][j]);
            printf("\n");
        }
    }

    return 0;
}